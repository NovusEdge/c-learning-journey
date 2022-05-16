#include<stdio.h>

// Here's an example of a simple function.


// ========================== Function Signature ===============================
void greet(char*);

// This is similar to declaring a variable. Currently, greet is declared in the
// global scope, and hence can be accessed throughout this program.
//
// If you're wondering why we need something like a function signature,
// good job! :)
//
// Since all the code is executed sequentially (i.e. line-by-line) once it is
// compiled, the compiler needs to know what "greet" means before it can be
// used as a function.
//
// In other words, if you want to use something as a variable, you must first
// declare the variable. Similarly, if the compiler cannot find a signature for
// a function, it'll throw an error. A function definition is similar to a
// variable's initialization.
// =============================================================================



int main(int argc, char const *argv[]) {

// =========================== Calling the Function ============================
    greet("Aliasgar");
    // ^ This is a function call. Calling a function will cause the program to
    // execute whatever the function does, i.e. the function does whatever it's
    // defined to do.
    //
    // In this case, I'm calling the function "greet" with the argument
    // "Aliasgar".
    //
    // The function "greet" that's defined after the main function, simply
    // prints "Hello, " followed by whatever argument is passed into the
    // function, followed by an "!".
    //
    // Expected output: "Hello, Aliasgar!\n".
// =============================================================================

    return 0;
}



// ========================== Function definition ==============================
// |-----------------------------------| Function's return-type.
// |
// |          |------------------------| Function's name/identifier
// |          |
// |          |             |----------| Function's argument declaration(s)
// v          v             v
void        greet       (char* name) {
                                    //  |
    printf("Hello, %s!\n", name);   //  |<-------| Function Body
                                    //  |
}
// =============================================================================
