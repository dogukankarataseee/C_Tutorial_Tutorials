#include <stdio.h>
#include <stdlib.h>
//C Multidimensional Arrays

/*
- A multidimensional array is basically an array of arrays.

- Arrays can have any number of dimensions. In this chapter, 
we will introduce the most common; two-dimensional arrays (2D).

*/


/*
Two-Dimensional Arrays

A 2D array is also known as a matrix (a table of rows and columns).
*/

int main()
{
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

	printf("%d", matrix[0][2]);  // Outputs 2
    
	// Change Elements in a 2D Array
	matrix[0][0] = 9;
    printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1

    
    
    return 0;
}
