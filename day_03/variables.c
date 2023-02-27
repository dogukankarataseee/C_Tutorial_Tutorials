#include <stdio.h>
#include <stdlib.h>

// C Variables

/*
   --> Variables are containers for storing data values, like numbers and characters.

- int - stores integers without decimals, such as 123 or -123
- float - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

*/


int main(void) {

	// Create variables
	int myNum = 15;            // Integer (whole number)
	float myFloatNum = 5.99;   // Floating point number
	char myLetter = 'D';       // Character
	
	// Print variables
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);

	return 0;
}
