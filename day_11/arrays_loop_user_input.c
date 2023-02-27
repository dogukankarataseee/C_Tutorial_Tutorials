#include <stdio.h>
#include <stdlib.h>

// You can loop through the array elements with the for loop.

int main()
{
    int array[5]; // Another common way to create arrays, is to specify the size of the array, and add elements later
    int i;
    for(i=0;i<5;i++)
    {   
        printf("give me %d. number = ",i);
        scanf("%d",&array[i]);
        
    }
    
	printf("your arrays = ");  
    
	for(i=0;i<5;i++)
	{
		printf("%d\t ",array[i]);
	} 
  
    return 0;
}
