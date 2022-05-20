# Day 19
In the name of Allah, The Guide, The Leader, he Wonderful Originator

## Macro Substitution

A `#define` statement (a definition) has the following syntax:

```c
#define name relacaement_text
```

 It calls for a _macro substitution_ of the simplest kind; the subsequent occurences of the token _name_ will be replaced by _replacement_text_.  The name in a `#define` has the asme form as a variable name. 

Normally the replacement text is the rest of the line, but a long defini- tion may be continued onto several lines by placing a `\` at the end of each line to be continued. It is also important to note that the scope of such a statement is **from it's point of definition to the end of the source file compiled**, and a definition may use other definitions.

It is also possible to define macros with arguments, so the replacement text can be different for different calls of the macro. For example:

```c
#define max(A, B) ((A) > (B) ? (A) : (B))
```

Although it looks like a function call, a use of `max` expands into in-line code; each occurence of a formal parameter will be replaced by corresponding actual argument. 

> If you're confused about what this means, try and have a look at the `macros.c` file in the current entry.

Names may be undefined with `#undef`, usually to ensure that a routine is really a function, not a macro:

```c
#undef getchar

int getchar(void) { ... } 
```

Formal parameters are not replaced within quoted strings. If, however, a parameter name is preceded by a `#` in the replacement text, the combination will be expanded into a quoted string with the parameter replaced by the actual argument.

For example, if defining a debugging print macro:

```c
#define dprint(expr) printf(#expr " = %g \n", expr)
```

When invoked (for example with `expr` as _x/y_):

```c
dprint(x/y) 

//	|
//	|
//	v

// The macro expands to:
printf("x/y" " = %g \n", x/y);
// the strings are concatenated, so the result is:
printf("x/y = %g \n", x/y);
```

Within the actual argument, each `"` is replaced by `\"` and each `\` by `\\`, so the result is a legal string constant.

The preprocessor operator `##` provides a way to concatenate actual arguments during macro expansion. If a parameter in the replacement text is adjacent to a `##`, the parameter is replaced by the actual argument, the `##` and surrounding white space are removed, and the result is re-scanned.

> The rules for nested uses of `##` are arcane, if you plan to use these, please refer to proper documentation. There's some information in the Appendix A of the textbook too.

> I'll end this entry here, hope you learned something new, I know I did >.>
