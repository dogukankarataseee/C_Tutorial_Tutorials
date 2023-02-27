#include <stdio.h>
#include <stdlib.h>

// Call a Function

// Create a function

void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"

/*
        A function can be called multiple times:
int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}
   outputs
// I just got executed!
// I just got executed!
// I just got executed!

*/
