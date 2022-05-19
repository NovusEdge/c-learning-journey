#include<stdio.h>

// Function signature
unsigned long int factorial(unsigned int);

int main() {
	unsigned long int f = factorial(5); // 120
	printf("5! = %lu\n", f);


	return 0;
}

// =============================================================================
// If you're new to recursion I would suggest you try and read up on a topic
// from math called: Principle of Mathematical Induction.
// As for the people who know what recursion is, well, I'll explain it anyways
// by comments all over the code so look closely.

// The factorial is of a number is the product of all numbers from 1 to that
// number. It is denoted with a "!" after a number/variable:
// 0! = 1
// 1! = 1
// 2! = 1 * 2 = 2
// 3! = 1 * 2 * 3 = 6
// 4! = 1 * 2 * 3 * 4 = 24
// 5! = 1 * 2 * 3 * 4 * 5 = 120

// Notice that the factorial of a number is the product of the number itself
// with the factorial of the number before it?
// That's the main reason why we can use recursion to get the factorial of a
// number. Although it's not very efficient and rather costly in terms of
// storage.

// Let me explain how the function works...
// If you bothered to read up on Mathematical Induction, you'll notice straight
// away that the first 3 lines of the function body: -------|
unsigned long int factorial(unsigned int number) { // 		|
	if(number < 2) {// |									|
		return 1;	// |<-----------------------------------|
	}				// |
// are actually representing the test-case for the inductive process; i.e. they
// check if the number satisfies the basic requirements for having a factorial,
// as well as check if the number is the test case. If "number" is the test case
// which in this case is 0 or 1, the function returns 1.

// This line mainly completes the entire chain of recursion. Simply put, it
// makes use of the stuff I mentioned before, i.e. "a number is the product of the
// number itself with the factorial of the number before it".
// "number" being the number itself, and "number-1" being the number before it.
// The recursive part comes from this line since it calls the parent function.
// This process continues until the recursive process reaches a point where it
// executes: 2 * factorial(2-1), i.e. the recursive function calls get to the
// test cases. When this is done, the factorial has been calculated by the
// previously calculated values and thus we get the final product.
	return number * factorial(number-1);

// It's a bit confusing at first, so just chill and maybe lookup a video
// tutorial about this because to be honest I think that'd make it much more
// easier to understand. :P
}
