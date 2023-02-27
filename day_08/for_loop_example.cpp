// for loop exapmle

#include <stdio.h>
#include <stdlib.h>

//sum of numbers
int main()
{
 int number,i;
 int sum =0 ;
 
  printf("give me a number: ");
  scanf("%d",&number);
  
  for(i=1;i<=number;i++){
  	
  	sum = sum + i;
  }
  
  printf("%d",sum);

    return 0;
}
