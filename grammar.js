const idRE = /([a-zA-Z](\w|')*)|[!%&$#+\-/:<=>?@\\~`^|*]/;

module.exports = grammar({
    name: 'standardml',

    extras: $ => [
        /\(\*([^\*]|\*[^\)])*\*\)/,     // comments (no nesting allowed)
        /[\r\n\t ]*/
    ],
    
    rules: {
        prog: $ => choice(
            $.dec,
            'functor'
        ),

        dec: $ => choice(
            seq('val', $.valbind),   // TODO: missing <var>(,)
            seq('type', $.typbind)
        ),

        valbind: $ => choice(
            seq($.pat, '=', $.exp),  // TODO: missing <and valbind>
            seq('rec', $.valbind)
        ),

        typbind: $ => prec.left(seq(zeroOneOrList($.var),
                                    $.id, '=', $.typ,
                                    repeat(seq('and', $.typbind)))),  

        typ: $ => prec.left(choice(
            $.var,
            seq(zeroOneOrList($.typ), $.longid),
            seq('(', $.typ, ')'),
            prec.right(seq($.typ, '->', $.typ)),
            prec.left(1, seq($.typ, '*', $.typ)),
            seq('{', commaSep(seq($.lab, ':', $.typ)), '}')
        )),

        // patterns
        pat: $ => choice(
            $._con,
            '_',
            $.id                  // TODO:  missing <op> 
        ),
        
        // expressions
        exp: $ => choice(
            $._con,
            seq(optional('op'), $.longid),
            prec.left(1, seq($.exp, $.exp)),     // function application
            // TODO infix application (must take into account default precedences
            seq('(', $.exp, ')'),
            seq('(', $.exp, ',', $.exp, repeat(seq(',', $.exp)), ')'),
            seq('{', commaSep(seq($.lab, '=', $.exp)), '}' ),
            seq('#', $.lab),
            seq('[', commaSep($.exp), ']'),
            seq('(', $.exp, ';', $.exp, repeat(seq(';', $.exp)), ')'),   // sequence
            seq('let', $.dec, 'in', $.exp, repeat(seq(';', $.exp)), 'end'),
            // TODO raised precedence to avoid conflicts; probably should
            // be a syntax error to have val pat = exp : typ id
            prec(1, seq($.exp, ':', $.typ)),
            prec.right(seq('raise', $.exp)),
            prec(1, seq($.exp, 'handle', $.match)),
            prec.left(1, seq($.exp, 'andalso', $.exp)),
            prec.left(1, seq($.exp, 'orelse', $.exp)),
            // infix application
            // TODO: should take into account precedence of predefined operators
            prec.left(2, seq($.exp, $.id, $.exp)),   
            seq('while', $.exp, 'do', $.exp),
            seq('case', $.exp, 'of', $.match),
            seq('fn', $.match)
        ),

        match: $ => prec.right(seq($.pat, '=>', $.exp, repeat(seq('|', $.pat, '=>', $.exp)))),
        
        // constants
        _con: $ => choice(
            $.int,
            $.word,
            $.float,
            $.char,
            $.string
        ),

        int: $ => choice(
            seq(optional('~'), $._num),
            seq(optional('~'), '0x', $._hex)
        ),

        word: $ => choice(
            seq('0w', $._num),
            seq('0wx', $._hex)
        ),

        float: $ => choice(
            seq(optional('~'), /\d+\.\d+/),
            seq(optional('~'), /\d+(\.\d+)?e~?\d+/)
        ),

        char: $ => /#"((\\(["abvrnt\\]|\d\d\d|u[0-9A-Fa-f]{4}))|[^"])"/, // /#"((\\["abtnvfr\\])|[^"])"/,

        string: $ => /"((\\")|[^"])*"/,

        _num: $ => /\d+/,
        _hex: $ => /[0-9A-Fa-f]+/,
            
        
        // identifiers
        longid: $ => seq($.id, repeat(seq(token.immediate('.'), token.immediate(idRE)))),

        id: $ => idRE,

        lab: $ => choice(
            $.id,
            /[1-9][0-9]*/
        ),
        
        var: $ => /''?[A-Za-z0-9'_]*/,   //'
    }
});

// zero, one or multiple occurrences of rule in parentheses, 
// separated by commas
function zeroOneOrList(rule) {
    return optional(choice(rule,
                           seq('(', rule, repeat(seq(',', rule)), ')')));
}

function commaSep(rule) {
    return optional(choice(rule, seq(rule, repeat(seq(',', rule)))));
}
                         
