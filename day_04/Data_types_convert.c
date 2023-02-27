// Type Conversion
#include <stdio.h>


int main( void )
{

int x = 5;
int y = 2;
int sum = 5 / 2;
float myFloat = 9;

// int
printf("%d\n", sum); // Outputs 2

// float
printf("%f\n", myFloat); // 9.000000

// float "decimal precision"
float sum1 = (float) x / y;
printf("%.1f", sum1); // 2.5  

  return 0;
}



