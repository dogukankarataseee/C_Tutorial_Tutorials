// C Constants 
#include <stdio.h>
#include <stdbool.h>

// You should always declare the variable as constant when you have values that are unlikely to change

// example = const int minutesPerHour = 60;
const float PI = 3.14;


int main()
{
	int circe_raidus;
	float area, around;

     
	printf("Enter the radius of the circle... : "); 
	scanf("%d",&circe_raidus);

 
	area = PI * circe_raidus * circe_raidus; 
	printf("area of the circle : %f \n",area);

	around = 2 * PI * circe_raidus;     
	printf("circle of the round : %f", around);
	
}

