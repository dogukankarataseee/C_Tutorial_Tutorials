#include <stdio.h>
#include <stdlib.h>

// C Strings
/*

- Strings are used for storing text/characters.For example, "Hello World" is a string of characters.
- Unlike many other programming languages, C does not have a String type to easily create string variables.
Instead, you must use the char type and create an array of characters to make a string in C:

*/

int main()
{
	char greetings[] = "Hello World!";
	
	printf("%s\n", greetings);

  /*
  Access Strings
  Since strings are actually arrays in C, you can access a string by referring to its index number inside
  square brackets [].This example prints the first character (0) in greetings
  
  */
   printf("%c\n", greetings[0]);
   
   /*
   Modify Strings
   To change the value of a specific character in a string, refer to the index number, and use single quotes
   
   */
   greetings[0] = 'J';
   printf("%s\n", greetings); // Outputs Jello World! instead of Hello World!
   
   /*
   Loop Through a String
   You can also loop through the characters of a string, using a for loop:
   
   */
    char carName[] = "Volvo";
    int i;
	
	for (i = 0; i < 5; ++i) {
	  printf("%c\n", carName[i]);
	}
	
	/*
	
	Another Way Of Creating Strings
	In the examples above, we used a "string literal" to create a string variable. 
	This is the easiest way to create a string in C.
	
	*/
	char Hello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s\n", Hello);
	printf("%lu\n", sizeof(greetings));   // Outputs 13
 
    return 0;
}
