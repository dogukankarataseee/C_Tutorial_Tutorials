#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
String Length
For example, to get the length of a string, you can use the strlen() function:

*/

int main()
{

    char name[]="Dogukan";
	char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Arrays Length =  %d\n",strlen(name)); // 7
    
    /*
	In the Strings chapter, we used sizeof to get the size of a string/array. 
	Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting
	
	*/
    printf("Arrays Length =  %d",sizeof(name)); // 8
	printf("%d", strlen(alphabet));   // 26
	printf("%d", sizeof(alphabet));   // 50

    return 0;
}
