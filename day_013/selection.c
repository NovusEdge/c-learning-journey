#include<stdio.h>

// Defining some preproc directives for boolean
#define True 1
#define False 0

int main() {
	/*
	 * Control Statements come in different flavours...
	 * First is the simple if statement:
	 */

	// Here's a simple example for an if statement:
	int condition = True;
	if (condition) {
		printf("The Condition is True!\n");
	}

	// If the variable: condition, is set to False,
	// the text within the if block will not be printed.


	// Next is the if-else statement:
	if (condition - 1) {
		printf("I don't know what this is supposed to be :\\ \n");
	} else {
		printf("The condition was true after all\n");
	}

	// An if-else statement can be extended to include many more cases by using "else if" blocks...
	if (condition - 10 == -9) {
		printf("??\n");
	} else if (condition - 1 == 9) {
		printf("It's just random conditions but you can try changing the value to see if it helps\n");
	} else {
		printf("Default output here!\n");
	}

	// There's also the conditional operator (also known as the ternary operator):
	condition = 5 > 10 ? 1 : 10;

	// One may add multiple else if blocks to include more cases, it depends on what's required.

	// Next there's the switch statement:
	switch (condition) {
		case True:
			printf("True\n");
			break;

		case False:
			printf("False\n");
			break;

		case 10:
			printf("¯\_(ツ)_/¯\n");
			break;

		default:
			printf("-_-\n");
	}


	return 0;
}
