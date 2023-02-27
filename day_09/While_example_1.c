#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    output examle -->
    give me a number: 100
        100
        200
        300
        400
        500
        600
        700
        800
        900
        1000
    */
    int number;

    printf("Please give me a number :");
    scanf("%d",&number);

    int i = 1;

    while (i<=10) {

        printf("%d\n",i*number);
        i++;
    }

    return 0;
}
