// C If ... Else

#include <stdio.h>
#include <stdbool.h>

/*
	Conditions and If Statements
	You have already learned that C supports the usual logical conditions from mathematics:
	
	Less than: a < b
	Less than or equal to: a <= b
	Greater than: a > b
	Greater than or equal to: a >= b
	Equal to a == b
	Not Equal to: a != b
	
	if (condition) 
	{
     // block of code to be executed if the condition is true
    }
    
    if (condition) 
	{
  	// block of code to be executed if the condition is true
	} 
	else 
	{
  	// block of code to be executed if the condition is false
	}

*/

int main( void ) 
{
    int x = 20;
	int y = 22;
	
	if (x > y) 
	{
	  printf("x is greater than y");
	}
    // Use the else statement to specify a block of code to be executed if the condition is false
    else if (x<y)
	{
	  printf("x is shorter than y");	
	}  
    else
    {
    	printf("x is equal y");
	}
  return 0; 
}


