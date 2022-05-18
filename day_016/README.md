# Day 16

In the name of Allah, The Alive, The Finder

> Heya! \
> Hope it's all been a satisfactory experience going through this until now >.> \
> If you have any sorts of suggestions and such, please feel free to make them known using the `Issues` or `Discussions` section of the repository. \
> You can also reach out to me on my email: khimanialiasgar@gmail.com :)

In the last entry, the last topic I wrote about was "Header Files". So, before you proceed, just know that I have not forgot about the topic, and will be getting back to it in future entries.

# Static Variables
As per the textbook: _The `static` declaration, applied to an external variable or function, limits the scope of that object to the rest of the source file being compiled._

In simpler words, by applying the `static` modifer for an external variable or function, you can bascially limit it's use to the file it is contained within at compiletime.

> I don't really know if the wording is accurate on this one, but I think it's accurate enough to get the point across.

Static storage is specified by prefixing the normal declaration with the word `static`.

```c
static char buf[SIZE];
static int some_number = 0;
```

Now, if these are used by any function in the same source file and compiled in the same way (i.e. in one file), _then no other routine will be able to access these variables_, and their names will not conflict with the same names in other files of the same program.

Note: External _static_ declaration is most often used for variables, but it can also be applied to functions.

```c
static void print_error(char* err) {
	fprintf(stderr, "%s", err);
}
```

Normally, function names are global, visible to any part of the entire program. **If a function is declared static, however, its name is invisible outside of the file in which it is declared.**

The static declaration can also be applied to internal variables. Internal static variables are local to a particular function just as automatic variables are, but unlike automatics, they remain in existence rather than coming and going each time the function is activated. This means that _internal static variables provide private, permanent storage within a single function._

## Register Variables

A `register` declaration advises the compiler that the variable in question will be heavily used (and thus will need fast operation capabilities). 

The idea is that register variables are to be placed in machine registers, which may result in smaller and faster programs. _But compilers are free to ignore the advice._ 

Here's an example of a register declaration:

```c
register int  x;
register char c;
```


***NOTE***: _The register declaration can only be applied to automatic variables and to the formal parameters of a function._

**It is not possible to take the address of a register variable**, regardless of whether the variable is actually placed in a register. The specific restrictions on number and types of register variables vary from machine to machine.

---

> I believe I will end this entry here... \
> Hope this was helpful :) \
> Cya!


