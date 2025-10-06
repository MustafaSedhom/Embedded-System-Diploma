//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_5
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to calculate factorial of a number using Recursion.
////////////////////////////////////////////
#include <stdio.h>
unsigned int number;
long factorial(unsigned int);
int main()
{
	printf("Enter your integer ( positive ) : ");
	scanf("%d",&number);
	printf("%ld",factorial(number));
	
	return 0;
}
long factorial(unsigned int input_number)
{
	if(input_number==0 || input_number == 1) return 1;
	else
	   return(input_number*factorial(input_number-1));	    	    	
}