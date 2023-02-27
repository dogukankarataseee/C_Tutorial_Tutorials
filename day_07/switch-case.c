// Switch Statement

#include <stdio.h>

// Instead of writing many if..else statements, you can use the switch statement

/*

switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

*/

int main()
{
  int day;
  printf("ENTER DAY NUMBER : ");    
  scanf("%d",&day);	
  

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}

// Outputs "Thursday" (day 4)
  
  
  
  
  
  return 0;
}



