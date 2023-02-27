#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Printing numbers from zero to the number of entered
    */
    int number;
    int i=0;
    printf("Please give me a number :");
    scanf("%d",&number);
    
    while(i<=number)
    
    {
        printf("%d ",i);
        i +=1;
    }


    return 0;
}
