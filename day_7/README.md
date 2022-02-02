# Day 7

In the name of Allah, The Guardian, The Witness.

> Yay! \
> Finally a week into learning C!

This part of the book gets into the language specifications for C and jargon for programming languages.

## Parts of a C

A **header file** is a file containing C declarations and macro definitions to be shared between program files

The _ISO C_[^1] standard library consists of 24 header files which can be included into a programmer’s project with a single directive. Each header file contains one or more function declarations, data type definitions and macros.

The following list contains the set of standard headers:
- [assert.h](https://en.wikipedia.org/wiki/Assert.h)
- [complex.h](https://en.wikipedia.org/wiki/C_mathematical_functions#complex.h)
- [ctype.h](https://en.wikipedia.org/wiki/C_character_classification)
- [errno.h](https://en.wikipedia.org/wiki/Errno.h)
- [fenv.h](https://en.wikipedia.org/wiki/C_mathematical_functions#fenv.h)
- [float.h](https://en.wikipedia.org/wiki/C_data_types#float.h)
- [inttypes.h](https://en.wikipedia.org/wiki/C_data_types#inttypes.h)
- [iso646.h](https://en.wikipedia.org/wiki/C_alternative_tokens)
- [limits.h](https://en.wikipedia.org/wiki/C_data_types#limits.h)
- [locale.h](https://en.wikipedia.org/wiki/C_localization_functions)
- [math.h](https://en.wikipedia.org/wiki/C_mathematical_functions#Overview_of_functions)
- [setjmp.h](https://en.wikipedia.org/wiki/Setjmp.h)
- [signal.h](https://en.wikipedia.org/wiki/C_signal_handling)
- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [stdbool.h](https://en.wikipedia.org/wiki/C_data_types#stdbool.h)
- [stddef.h](https://en.wikipedia.org/wiki/C_data_types#stddef.h)
- [stdint.h](https://en.wikipedia.org/wiki/Stdint.h)
- [stdio.h](https://en.wikipedia.org/wiki/C_file_input/output)
- [stdlib.h](https://en.wikipedia.org/wiki/Stdlib.h)
- [string.h](https://en.wikipedia.org/wiki/C_string_handling)
- [tgmath.h](https://en.wikipedia.org/wiki/C_mathematical_functions#tgmath.h)
- [time.h](https://en.wikipedia.org/wiki/C_date_and_time_functions)
- [wchar.h](https://en.wikipedia.org/wiki/C_string_handling)
- [wctype.h](https://en.wikipedia.org/wiki/C_character_classification)


There are two specified ways in C to include a header file:

```c
// To include a header file (say "header.h"), we can use:
#include <header.h>


// OR
#include "header.h"
```

Both methods to include have a key difference, i.e. the `#include <header.h>` usually searches the standard library location for `header.h` (`/usr/headers` for UNIX/Linux). The `#include "header.h"` is used for user-defined header files that reside in a specific location. More on this can be found on [this](https://stackoverflow.com/questions/21593/what-is-the-difference-between-include-filename-and-include-filename) StackOverflow post. 

Just remember, the `main` function is a **must** for a program that will be run directly via the compiler, i.e. it's the program of execution.

### Concept of a Variable

Similar to how variables work in mathematics, in programming, variables provide a way to store data. Each variable typically maps some data to an _identifier_. 

A programming language must provide a way of storing the data that are to be processed, otherwise it becomes useless. In this context, it may be mentioned that a computer provides a _Random Access Memory (RAM)_ for storing the executable program code and the data the program manipulates.
* _A computer memory is made up of registers and cells which are capable of holding information in the form of binary digits 0 and 1 (bits)._

***Definition***: _Data is stored in the memory at physical memory locations. These locations are known as the **memory address**._

***Definition***: _The amount of bits on which it can operate simultaneously is known as the **word length** of the computer. A word is the natural unit of memory for a given computer design._
When we say a machine is a _16-bit machine_, it refers to the word-length of the machine. A _64-bit machine_ can use 64 bit words. When we say that Pentium 4 is a _32 bit machine_, it means that it _simultaneously operates on 32 bit of data_.

***Definition***: _A **variable** is an identifier for a memory location in which data can be stored and subsequently recalled. Variables are used for holding data values so that they can be utilized in various computations in a program._
The C compiler generates an executable code which maps data entities to memory locations. For example, the variable definition:

```c
int salary = 1000
```

causes the compiler to allocate a few bytes to represent _salary_.
The compiler uses the address of the first byte at which salary is allocated to refer to it. The above variable definition causes _salary_ to represent _1000_; to be stored as a binary number in the allocated bytes.

All variables have three important attributes:

- A ***data type*** that is established when the variable is defined, e.g., **integer**, **real**, **character**. _Once defined, the type of a C variable cannot be changed._
 
- A ***name*** of the variable; i.e. the _variable identifier_

- A ***value*** that can be changed by assigning a new value to the variable. _The value that can be assigned to a variable depends on it's data type._



The number of characters that you can have in a variable name will depend upon your compiler. A minimum of 31 characters must be supported by a compiler that conforms to the C language standard, so you can always use names up to this length without any problem. Variable names are case sensitive. Any variable must be declared before use. 

**Some compilers will truncate names that are too long.**

### Data Types in C

There are 5 _basic_ data types in C. These are called **primitive** types:
1. _character_ - `char`
2. _integer_ - `int`
3. _floating point_ - `float`
4. _double precision floating point_ - `double` 
5. _valueless_ - `void`

Here are the sizes and ranges of basic data types in C:


```
Data-Type | Size (in bits)  | 	           Range (16-bit Computer) |      Range (64-bit Computer)          |             
----------|-----------------|---------------------------------------|---------------------------------------|
  char		|	    8	     	 |	             -128 to 127              |             –128 to 127               |
  int		|		16         | 	           -32768 to 32767            |      –2147483648 to 2147483647        | 
  float	|		32			 |   1.17549 × 10^38 to 3.40282 × 10^38  |  1.17549 × 10^38 to 3.40282 × 10^38   |
  double	|		64			 |	 2.22507 × 10^308 to 1.79769 × 10^308 | 2.22507 × 10^308 to 1.79769 × 10^308  |
  void		|		 8			 |			       valueless.              |                valueless              |
```

According to [IEEE](https://www.ieee.org/), the precisions for float and double are 6 and 15 respectively[^2]
According to ISO/IEC draft, _“The void type comprises an empty set of values; it is an incomplete type that cannot be completed.”_


The following points should be noted:

* Each of these type modi fiers can be applied to the base type int.
* The modifiers signed and unsigned can also be applied to the base type char.
* In addition, long can be applied to double.
* When the base type is omitted from a declaration, int is assumed.
* The type void does not have these modifiers.

The specifiers and qualifiers for the data types can be broadly classified into three types:
- **Size specifiers** — _short_ and _long_
- **Sign specifiers** — _signed_ and _unsigned_
- **Type qualifiers** — _const_, _volatile_ and _restrict_

The **size qualifiers** _alter the size_ of the basic data types.
There are two such qualifiers that can be used with the data type int; these are _short_ and _long_.

In any [ANSI C](https://en.wikipedia.org/wiki/ANSI_C) compiler, the sizes of _short int_, _int_, and _long int_ are restricted by the following rules:
- The minimum size of a short int is two bytes.
- The size of an int must be greater than or equal to that of a short int.
- The size of a long int must be greater than or equal to that of an int.
- The minimum size of a long int is four bytes.

To be precise:
```
If "int", "short_int" and "long_int" represent the respective data-types:

1) sizeof(short_int) == 2 bytes
2) sizeof(int) >= sizeof(short_int)
3) sizeof(long_int) >= sizeof(int)
4) sizeof(long_int) >= 4 bytes
```



The _long_ qualifier is also used with the basic data type _double_. In older compilers this qualifier was used with _float_, but it is not allowed in the popular compilers of today. As mentioned earlier, _it may be noted here that the sign qualifiers can be used only with the basic data types `int` and `char`_

The C89 Committee added to C two type qualifiers, _const_ and _volatile_; and C99 adds a third, _restrict_.
Type qualifiers control how variables may be accessed or modified. They specify which variables will never (const) change and those variables that can change unexpectedly (volatile).

Both keywords require that an associated data type be declared for the identifier.

```c
#include <stdio.h>

int main(void) {
	const int value = 42; 	/* constant, initialized integer variable */

	
	value = 100; /* <-- wrong! − will cause compiler error */
	

	return 0; 
}
```

***NOTE***: _const_ does not turn a variable into a constant. A variable with const quali fier merely means the variable cannot be used for assignment. This makes the value read only through that variable; _it does not prevent the value from being modified some other ways e.g. through pointer._


The _volatile_ keyword indicates that a variable can unexpectedly change because of events outside the control of the program.

It tells the compiler that the object is subject to sudden change for reasons which cannot be predicted from a study of the program itself, and forces every reference to such an object to be a **genuine reference**.

The _restrict_ type qualifier allows programs to be written so that translators can produce significantly faster executables. Anyone for whom this is not a concern can safely ignore this feature of the language.

C99 also allows extended integer types [<inttypes.h>](https://en.wikipedia.org/wiki/C_data_types#inttypes.h), and [<stdint.h>](https://en.wikipedia.org/wiki/C_data_types#stdint.h)) and a boolean type [<stdbool.h>](https://en.wikipedia.org/wiki/C_data_types#stdbool.h)).


It may thus be concluded that in any C implementation in which a _char_ is stored in an 8-bit byte, **the corresponding int value will always be a non-negative quantity whatever the value of the leftmost (sign) bit**. 

The system file [limits.h](https://en.wikipedia.org/wiki/C_data_types#limits.h) available in ANSI C-compliant compilers contains the upper and lower limits of integer types.

> Skipping the stuff about signed and unsigned distinctions, too much repitition of statements...


## Program Statement

A statement is a syntactic constructions that performs an action when a program is executed. All C program statements are terminated with a semicolon (;).Program Statements in C can be classified as follows: 

- ***Declaration***: _is a program statement that serves to communicate to the language translator information about the name and type of the data objects needed during program execution._
- ***Expression statement***: _is the simplest kind of statement which is no more than an expression followed by a semicolon. An expression is a sequence of operators and operands that specifies computation of a value (For example, `x = 4` is an expression; but `x = 4;` is a statement)_.
- ***Compound statement***: _is a sequence of statements that may be treated as a single statement in the construction of larger statements._
- ***Labeled statements***: _can be used to mark any statement so that control may be transferred to the statement by "switch" statement_
- ***Control statement***: _the control statements determine the ‘flow of control’ in a program._
- ***Selection statements***: _allow a program to select a particular execution path from a set of one or more alternatives_
- ***Iteration statements***: _are used to execute a group of one or more statements repeatedly._
- ***Jump statements***: _cause an unconditional jump to some other place in the program._

### Declaration

The general form of declaring data/variable is:

```
<data_type>  identifier [= value(s)];
								 ^
								 |
								 /----> Optional (depending on the language in question)
```


Here is an example showing declaration of variables in C:

```c
// This holds a value of "10", i.e. declaration AND assignment of variable in the same statement.
int example_int = 10;


// This will hold a garbage value since none is assigned to it. i.e. just declaration.
int some_integer;

// Declaring multiple variables:
int a;
int b;
int c;

// Alternatively a shorter syntax is:
int a, b, c;
```

Variables are declared at three basic places. 
- Firstly, when these are declared inside a function, they are called **local variables**.
- Secondly, when the variables are declared in the definition of function parameters, these variables are called **formal parameters**.
- And thirdly, when the variables are declared outside all functions, they are called global variables. Variables used in expressions are also referred to as **operands**.


[^1]: Here's an awsome resource for ISO_: [iso c](https://www.gnu.org/software/libc/manual/html_node/ISO-C.htmlC)

[^2]: [IEEE-754-1985](https://ieeexplore.ieee.org/document/30711)