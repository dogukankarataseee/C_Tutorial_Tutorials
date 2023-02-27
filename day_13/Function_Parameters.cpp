#include <stdio.h>
#include <stdlib.h>

// Parameters and Arguments

/*

returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}

*/

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Hello Liam
// Hello Jenny
// Hello Anja
