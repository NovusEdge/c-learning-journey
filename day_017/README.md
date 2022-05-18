# Day 17

In the name of Allah,  The Sole One, The Capable, The One with the perfect Power that nothing is withheld from Him.

## Block Structure

Variables can be defined in a block-structured fashion. Declarations of variables (including initializations) may follow the left brace that introduces any compound statement, not just the one that begins the function. _Variables declared in this manner are invisible outside the said block, and hide any identically named variables in outer blocks but remain in existence until the matching right brace._

Each variable declared has a scope within which it can be used. Think of them as `sets` from from `set-theory` we study in math.


A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

- _Inside a function or a block_ which is called **local variables**.
- _In the definition of function parameters_ which is called **formal parameters**.
- _Outside of all functions_ which is called **global variables**.

Here's a block:

```c
{
	
}
```

The braces define a `block`, simply put, it's a container that can limit the scope of stuff inside it so that whatever's inside remains inside unless specified otherwise.


Here's an example;

```c
// Global variable...
int global_variable = 10;
// This will be accessible anywhere in the program.

{    // Block 1

	int block_one_var;

	{    // Block 2
		int block_two_var;
	}
	
	{    // Block 3
		int block_three_var;
	}
}
```

In the above example, you can consider the entire program to be a giant block that contains all other blocks. (Sort of like the universal set _U_ from set theory). The global variable: `global_variable` is accessible everywhere in the program.

`Block 1` is a block containing `Block 2` and `Block 3`, all three of these hold a variable. `block_one_var` is only accessible by `Block 1` and all other _sub-blocks_ it holds. For instance, we wont be able to access it in the global scope as we would access `global_variable`. Similarly, for variables: `block_two_var`  and `block_three_var` can be accessed by their respective blocks only.

> A block with higher scope cannot access variables private to the scope below it.

However this _may_ lead to funny business, for an instance, 

```c
#include<stdio.h>

// Global variable declaration:
int g = 20;
 
int main () {
   // Local variable declaration:
   int g = 10;
 
   printf("%d\n", g);
 
   return 0;
}
```

Running this in the command line, we see:

```console
$ gcc program.cpp && ./a.out && rm a.out
10
```

This means that the variable `g` was effectively overwritten...

Here's an excellent stackoverflow thread that might help with this: [SO-thread](https://stackoverflow.com/questions/21275992/redeclaration-of-global-variable-vs-local-variable)
Also, here's some extra information regarding [External Object Definitions](http://port70.net/~nsz/c/c11/n1570.html#6.9.2)

It quotes:

> In C, the statement `int a;` when made at file scope, is a declaration and a _tentative definition_. You can have as many tentative definitions as you want, as long as they all match each other.
> 
> If a definition (with an initializer) appears before the end of the translation unit, the variable will be initialized to that value. Having multiple initialization values is a compiler error.
> 
> If the end of the translation unit is reached, and no non-tentative definition was found, the variable will be zero initialized.
> 
> The above does not apply for local variables. Here a declaration also serves as a definition, and having more than one leads to an error.

## Initialization

Initialization has been mentioned in passing many times so far, but always peripherally to some other topic.

_In the absence of explicit initialization, external and static variables are guaranteed to be initialized to zero; automatic and register variables have undefined (i.e., garbage) initial values._

Scalar variables may be initialized when they are defined, by following the name with an equals sign and an expression:

```c
int x = 1;
char quote = '\'';
long day = 1000L * 60L * 60L * 24L;
```

For external and static variables, the initializer must be a constant expression; the initialization is only done once, conceptually before the program begins it's execution.

For automatic and register variables, it is done each time the function or block is entered. Furthermore, in this case, the initializer is not restricted to being a constant.

An array may be initialized by following its declaration with a list of initializers enclosed in braces and separated by commas. Note that **when the size of the array is omitted, the compiler will compute the length by counting the initializers.**

If there are fewer initializers for an array than the number specified, the missing elements will be zero for extemal, static, and automatic variables. It is an error to have too many initializers. There is no way to specify repetition of an initializer, nor to initialize an element in the middle of an array without supplying all the preceding values as well.

> That'll be all for this entry \
> Cheers!