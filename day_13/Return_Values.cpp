#include <stdio.h>
#include <stdlib.h>

// Return Values

/*
 If you want the function to return a value, you can use a data type (such as int or float, etc.)
 instead of void, and use the return keyword inside the function

*/

int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}

// Outputs 8 (5 + 3)
