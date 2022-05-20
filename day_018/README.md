# Day 18
In the name of Allah, The Dominant, The Promoter

## Recursion

Wikipedia defines recursion as:[^1]

_**Recursion** (adjective: recursive) occurs when a thing is defined in terms of itself or of its type_

There's a definition more specific when it comes to programming:

_Recursion in computer programming is exemplified when a function is defined in terms of simpler, often smaller versions of itself. The solution to the problem is then devised by combining the solutions obtained from the simpler versions of the problem. One example application of recursion is in [parsers](https://en.wikipedia.org/wiki/Parser "Parser") for programming languages. The great advantage of recursion is that an infinite set of possible sentences, designs or other data can be defined, parsed or produced by a finite computer program._[^2]

However here's a simpler and more easy-to-understand definition:

_A Function calling itself again and again directly or indirectly is called Recursion, and the function which it calls is called a recursive function_

C supports recursion, and there's several problems that can be solved very easily if we use recursion. But, please do keep in mind that recursion is not always the answer.

In C, when a function calls itself recursively, each invocation gets a fresh set of all the automatic variables, independent of the previous set. 

The most classical example for recursion is factorial, you can check the `factorial.c` file in the current entry for more information. 

Recursion seems amazing, and it is (sometimes), however it has some downsides (major ones!). Recursion may provide no saving in storage since somewhere a stack of the values being processed must be maintained. Nor will it be faster (it _may_ be solved using caching), however the code _is_ more compact, and much easier to write and understand than the non-recursive (iterative) equivalent. Recursion is useful for recursively defined data structures like trees and such.

## The C Preprocessor

C provides certain language facilities by means of a preprocessor, which is conceptually a seperate first step in compilation. The two most frequently used features are `#include` and `#define`, to include the contents of a file during compilation, and to replace a token by an arbitary sequence of characters respectively.

### File Inclusion

File inclusion makes it easy to handle collections of `#define` and declarations (among other things). Any source line of form:

```c
#include "filename"

// OR

#include<filename>
```

is replaced by the contents of the file `filename`. The two statements above are a slight bit different. The first, i.e. `#include "filename"`, means that the searching for the file typically begins where the source program was found; if it is not found there or if the name is enclosed in _<_ and _>_, searching follows an implementation-defined rule to find the file.

An include file may itself containn `#include` lines. There are often several `#include` lines at the beginning of a source file, to include common `#define` statements and extern declarations, or to access the function prototype declarations for library functions from headers like `<stdio. h>`. (Strictly speaking, these need not be files; the details of how headers are accessed are implementation-dependent.) `#include` is the preferred way to tie the declarations together for a large program. It guarantees that all the source files will be supplied with the same definitions and variable declarations, and thus eliminates a particularly nasty kind of bug. Naturally, when an included file is changed, all files that depend on it must be recompiled.

Here's a great reference for recursion: https://takeuforward.org/recursion/what-is-recursion/

> Well, that'll be all for now. \
> For the people who're reading this, if you have _any_ suggestions and querys and such, please do not reach out to me ( just kidding, you can email me :P ).

---

[^1]: https://en.wikipedia.org/wiki/Recursion
[^2]: https://en.wikipedia.org/wiki/Recursion#In_computer_science
