#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array3d[2][3][4]={{{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{5, 6, 7, 3}, {1, -5, 10, 13}, {22, 15, 33, 12}}};
    
	printf("%d",array3d[0][0][1]); // outpu is 4
    return 0;
}
