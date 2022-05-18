# Day 15

In the name of Allah, The Perfection and Giver of Peace, The Firm, The Steadfast

> Hi! \
> Welcome back I guess, or if you're reading this stuff all in one go, then welcome back anyways :P \
> I guess I'll just get into it :)

In the previous entry, i.e. [`Day 14`](https://github.com/NovusEdge/c-learning-journey/tree/main/day_014), I dived into the shallow waters of the concepts related to/surrounding the topic of `functions`.

Next up is a small yet useful-to-know topic... _external variables_

## External Variables

The textbook says: \
_The adjective "external" is used in contrast to "internal," which describes the arguments and variables defined inside functions. External variables are defined outside of any function, and are thus potentially available to many functions._

So basically, external variables are the same as global variables, all but in the nature of their declaration statements in the program.

Example:

```c
#include<stdio.h>

// This is a global variable:
int global_variable;

int main(int argc, char const *argv[]) {
    extern int ext_var;
    // ^ This is NOT a global variable, but is an external variable.
    // The identifier for it can be used by other functions and it'll mean the
    // same thing.

    return 0;
}
```

> I'm not so sure if this a very good example (i.e. if it is even a valid example) \
> I'll try and include something about the difference between global and external variables in the `References` section.

By default, external variables and functions have the property that all references to them by the same name, even from functions compiled separately, are references to the same thing. (The standard calls this property external linkage.)

Any function may access an external variable by referring to it by name, if the name has been declared somehow.


## Scoping Rules

The textbook defines the term _scope_ quite nicely: \
_The scope of a name is the part of the program within which the name can be used._


But what exactly is the significance and/or reason for this... _scoping_??
Well, when you work on an _actual_ project (maybe in a professional setting), your program won't all be in _just one file_ as it may have been until now. It'll most probably be distributed across several directories and different files. Now, I can almost hear some people asking: "Well then how the hell do I make sense of all the _stuff_ in said program files? If one variable is in one file, how on earth will I access it in a different file?!"

Well, that's where scoping (and later, stuff like header files and such) comes into play. The functions and external and/or global variables and such need not all be compiled at the same time; the source text of the program (as mentioned earlier) may be kept in _several_ files, and previously compiled routines may be loaded from libraries.

Here's some important things to remember:

- The scope of an external variable or a function lasts from the point at which it is declared to the end of the file being compiled. The same goes for functions.

- Local variables of the same name in different functions are unrelated. The same is true of the parameters of the function, which are in effect local variables.

The textbook explicitly mentions that: \
_It is important to distinguish between the declaration of an external variable and its definition. A declaration announces the properties of a variable (primarily its type); a definition also causes storage to be set aside._

For example:
```c
int sp;
double val[MAXVAL];
```

If the above-mentioned lines appear _outside of any function_, they **define** the external variables, cause storage to be set aside, and also serve as declaration for the rest of the source file in question.

However, the following lines:
```c
extern int sp;
extern double val[];
```
**declare** for the rest of the source file that the mentioned variables, but they do not create the variables or reserve any storage for them. They simply specify: _There's 2 variables, one of type `int`, and another of type `double[]`, named `sp` and `val` respectively._

_There must be **only one definition** of an external variable among all the files that make up the source program; other files may contain extern declarations to access it._

NOTE: Initialization of an external variable goes only with the definition.


## Header Files

This topic is closely related to scoping and program management.
I'm sure that you have noticed the `#include<stdio.h>` line on top of your first programs and wondered... _Gee, I wonder what that's about?_

Well, it's a header file that contains code and/or code signatures that can be "imported" by your program, so that you can essentially (re)use code written by someone else.

There's _several_ ways to use header files, you can check the code files in the current entry for more information. :)


> I don't have as much time today >.> \
> Hopefully I'll be able to pick this up on the next few entries :)

---

References:
- [Difference between external and global variables](https://stackoverflow.com/questions/21529151/difference-between-extern-and-global-variables)
