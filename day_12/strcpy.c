#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Copy Strings
To copy the value of one string to another, you can use the strcpy() function:
*/
int main()
{
	char str1[20] = "Hello World!";
	char str2[20];
	
	// Copy str1 to str2
	strcpy(str2, str1);
	
	// Print str2
	printf("%s", str2);
    return 0;
}
