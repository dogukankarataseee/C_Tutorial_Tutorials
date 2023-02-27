// operators
#include <stdio.h>
#include <stdbool.h>


// Operators are used to perform operations on variables and values.

/*
---> Arithmetic operators
---> Assignment operators
---> Comparison operators
---> Logical operators
---> Bitwise operators

+	Addition	Adds together two values				x + y	
-	Subtraction	Subtracts one value from another		x - y	
*	Multiplication	Multiplies two values				x * y	
/	Division	Divides one value by another			x / y	
%	Modulus	    Returns the division remainder			x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x

*/

int main( void )
{

	int x = 5;
	int y = 3;
	printf("%d\n", x + y); // 8
	printf("%d\n", x - y); // 2
	printf("%d\n", x * y); // 15
	printf("%d\n", x / y); // 1 
	x +=1;
	y -=1;
	printf("%d\n", x); // 6
	printf("%d\n", y); // 2
	



  return 0;
}




