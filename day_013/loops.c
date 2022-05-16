#include<stdio.h>

int main() {

    /* Loops are used to perform a task repeatedly.
    C offers 3 distinct types of loops:
        - for loops
        - while loops
        - do-while loops

    There's also a 4th kind, but it isn't exactly a loop
    The 4th kind is a "goto loop". The "goto loop" is quite useless for normal
    programming, like in C, however, it makes quite a lot more sense if you're
    using assembly.
    */

    // Here are examples for each of the loops mentioned above:

    // =========================================================================
    // The for loop:

    // As discussed in the respective README.md file for this day, the for loop
    // has 4 parts:
    //
    //
    //                                      |------| increment/decrement
    //                                      |
    //                          |-----------|-------------------| Condition
    //                          |           |
    //              |-----------|-----------|------| Dummy variable declaration
    //              v           v           v
        for ( int dummy = 0; dummy < 10; dummy++) {
    //                                                      |
            printf("%d, ", dummy); //                       |<-----| Loop Body
    //                                                      |
        }
    printf("\n");
        // Note that we dont really require an increment/decrement statement
        // IN the loop-body, but it's just defined in the loop declaration.

    // The for loop can also be made to do infinite iterations. Furthermore
    // we can also completely omit one or more of the parts of the declaration.
    // For example, the following loop is an infinite loop, i.e. it won't stop
    // until you terminate your program manually (HINT: press Ctrl+C)

    // TODO: uncomment to see the infinite loop in action
    // for( ; ; ) {}

    // Now, the increment/decrement part of the loop can be any sort of
    // manipulation of the dummy variable. The term is used just because of the
    // common way for loops are used.
    // =========================================================================

    // The while loop:
    // The while loop has a very simple syntax:
    // It has 2 parts:

    //     |--------------| Condition
    //     v
    while (1) {
        // execute something                                |
        printf("printing stuff..."); //                     |<-----| Loop Body
        break; //                                           |
    }

    printf("\n");
    // =========================================================================
    // The do while loop:

    // The do while loop is just a spin off for the while loop. To be honest I
    // don't really see where I could use this kind of loop in practice, but I'm
    // guessing that it exists for a reason, so here it is:

    do {
        // execute something                                |
        printf("printing stuff..."); //                     |<-----| Loop Body
        break; //                                           |
    } while(1);
    //      ^
    //      |------| Condition
    printf("\n");
    // =========================================================================
    // The "goto loop":

    // Well, this one is kinda useless in normal practice unless you are dealing
    // with assembly or want to design some malware.

    int i = 0;
    lable:  // lable
    printf("Goto Loop :O\n");//                             |
    //                                                      |<----| Loop Body :)
    i++; //                                                 |
    //      |-------| Condition
    //      v
    if (i < 5){
        goto lable; // jumps to "lable" defined previously.
    }

    return 0;
}
