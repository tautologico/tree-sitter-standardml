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

        typbind: $ => seq($.id, '=', $.typ),  // TODO: missing <var>(,), <and typbind>

        typ: $ => choice(
            $.longid,
            seq('(', $.typ, ')')
        ),

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
    }
});
