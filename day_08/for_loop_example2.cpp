// for loop exapmle

#include <stdio.h>
#include <stdlib.h>

//Twice number

int main()
{
 int number,i;
  
  printf("give me a number: ");
  scanf("%d",&number);
  
  for(i=0;i<=number;i=i+2){
      printf("%d\n",i);
  }
  
  

    return 0;
}
