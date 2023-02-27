#include <stdio.h>
#include <stdlib.h>

// Change an Array Element

int main()
{
	int myNumbers[4] = {25, 50, 75, 100};
	int i;
	myNumbers[0] = 33;  // To change the value of a specific element, refer to the index number

    for(i=0;i<4;i++)
    {
        printf("%d ",myNumbers[i]); 	// Now outputs 33 instead of 25
    }
    return 0;
}
