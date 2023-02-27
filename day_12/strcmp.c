#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// we can compare array length

int main()
{
    int result;
    char a[15]="abcdef";
    char b[15]="ABCDEF";

    sonuc=strcmp(a,b);



    if(result<0)
    {
        printf("a<b");
    }
    else if(result >0)
    {
        printf("a>b");
    }
    else
    {
        printf("a=b");
    }

   return(0);
}
