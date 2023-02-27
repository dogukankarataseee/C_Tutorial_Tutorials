#include <stdio.h>
#include <stdlib.h>

/*
Break
You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.
*/

/*
Continue
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues
with the next iteration in the loop.
*/

int main()
{
// break
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}

//continue
int j;

for (j = 0; j < 10; j++) {
  if (j == 4) {
    continue;
  }
  printf("%d\n", j);
}


    return 0;
}
