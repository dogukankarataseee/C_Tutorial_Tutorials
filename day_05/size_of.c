#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can = 20;
    float sayim = 4.64;
    double doublesayim = 4.56;
    char karakterim = 'h';

    /*printf("Can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
    printf("Int hafizada %d byte kadar yer tutar\n",sizeof(int));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(char));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(float));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(double));*/

    printf("Can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(sayim));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(doublesayim));



    return 0;
}
