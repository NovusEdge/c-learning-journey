# Day 14

In the Name of Allah, The Abaser, The One

> So... for the one person who is actually following this, my apologies. \
> I had to go on a hiatus from this journey, simply because I had to shift \
> countries.
>
> I think I'll make these more personal from now on, and address the reader>
> directly rather than what I was doing before.

# Functions and Program Structure

As the textbook quotes it: _Functions break large computing tasks into smaller ones, and enable people to build on what others have done instead of starting over from scratch._

> Now, I think I can probably come up with a better and simpler-to-understand definition

My definition of a function (I don't claim that this is uniquely mine. It's simply a definition I thought up of right now, and believe it to define the term "function" in a better light.)

_Functions help people break up large chunks of code into smaller, more modular pieces, so as to make them more readable, manageable and shareable._

As mentioned in the definition I gave: :_functions make programs more manageable_". That is, if you need to change a piece of code for, all of your project, it's _much_ easier to change it in one place (i.e. your function definition) rather than go around and change it all over the program.

## Basics of Functions

If you have been writing code until now to some degree, you already have been using several different functions, the most common (and the first one you may have used) being `printf` from the `stdio.h` header.

Now, I have absolutely no idea what the `printf` function looks like or where to find it's actual function definition. But [this](https://github.com/bdbaraban/printf) is a repository recreating the `printf` function. We don't need to bother ourselves with the full definition just yet, so here's the function signature:

```c
int printf(const char *format, ...);
```

> I know, I have used several unfamiliar terms without introducing them first. :P \
> Don't worry, if you revisit this topic in the future it'll mean you get an even more clear understanding of what I'm talking about right now. So for now, just keep going on. :)

After giving a code example, the textbook says: \
_Although it's certainly possible to put the code for all of this in main, a better way is to use the structure to advantage by making each part a separate function. Three small pieces are easier to deal with than one big one, because **irrelevant details can be buried in the functions, and the chance of unwanted interactions is minimized. And the pieces may even be useful in other programs**._

The process mentioned above (the removing irrelevant details bit), refers to `abstraction`. (roughly speaking). It's one of the fundamental pillars for the development of many modern technologies, and is one of the 4 fundamental pillars of the `Object Oriented` paradigm of programming.

***Anyways...***

Here's how a function is defined:

```c
return_type function_name(argument_declarations){
    function_body
}
```

A simple and dumb example is:

```c
dummy() {}
```

This function does nothing and returns nothing. _However_, this function is NOT USELESS!
As the textbook rightfully mentions:

_A do-nothing function like this is sometimes useful as a place holder during program development. If the return type is omitted, `int` is assumed._

> Fun fact, I did not know that the default return type assumed by the compiler is _int_. Hell I did not even know if we're allowed to not mention the return type or the compiler can _assume_ return types.

Now, there are a few terms that we need to know before we dive fully into functions:

1. A `function signature` is exactly what it sounds like, a signature of the function. It's similar to the declaration of a variable in the program. It instructs a compiler on how to call a function, and what it should expect from the function in general. (More detail on function signatures can be found by a quick web search, or by checking the [`functions.c`](functions.c) file in the entry for `Day 14`). Note that A _declaration_ might not fully define the thing it is declaring.

2. _Calling a function_ refers to running the code within said function. It is also referred to as _invoking a function_. Function calls specify which function to call, and all of the arguments that the function requires. The result of a function call is a return value. _Not all functions have a return value._

3. The `function body` is the block of code that will be executed when a function is called.


> I guess I will end the entry for Day 14 here. :P \
> Hope this was a nice read >.> \
> Cheers!

---

References:
- [Programming Vocabulary](https://www.programmingforbeginnersbook.com/blog/expand_your_programming_vocabulary/)
- [Difference between function definition and function signature](https://stackoverflow.com/questions/2322736/what-is-the-difference-between-function-declaration-and-signature#2323005)
- [C standard library function definitions](https://github.com/DevSolar/pdclib)
