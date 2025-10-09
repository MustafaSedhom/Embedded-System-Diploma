//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_7
//==========================================
////////////////////////////////////////////
// Write c programming to swap two numbers without temp var.
////////////////////////////////////////////

#include <stdio.h>

float A_value=0.0,B_value=0.0;

int main()
{
	printf("enter value of A: ");
	scanf("%f",&A_value);
	printf("enter value of B: ");
	scanf("%f",&B_value);
	//swapping
	//let A_value=15 and B_value=20
	A_value += B_value;            // A_value = 15+20=35
	B_value  = A_value - B_value;  // B_value = 35-20=15 -> previous A_value 
	A_value -= B_value;            // A_value = 35-15=20 -> previous B_value
	//swapping is ok now
	printf("After swaping. value of A: %f \n",A_value);
	printf("After swaping. value of B: %f",B_value);

	
	return 0;
}