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
            $.con,
            $.id                  // TODO:  missing <op> 
        ),
        
        // expressions
        exp: $ => choice(
            $.con
        ),
        
        // constants
        con: $ => choice(
            $.int,
            $.char
        ),

        int: $ => seq(optional('~'), /\d+/),

        char: $ => /#"."/,
        
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
                         
