//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_5
//==========================================
////////////////////////////////////////////
// Write c programming to swap to numbers.
////////////////////////////////////////////
#include <stdio.h>

float A_value=0.0,B_value=0.0,help_swap_var=0.0;

int main()
{
	printf("enter value of A: ");
	scanf("%f",&A_value);
	printf("enter value of B: ");
	scanf("%f",&B_value);
	//swaping
	help_swap_var=A_value;
	A_value=B_value;
	B_value=help_swap_var;
	printf("After swaping. value of A: %f \n",A_value);
	printf("After swaping. value of B: %f",B_value);

	
	return 0;
}