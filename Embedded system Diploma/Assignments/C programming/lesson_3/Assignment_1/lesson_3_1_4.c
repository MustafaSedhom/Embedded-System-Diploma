//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to Multiply two floating point numbers.
////////////////////////////////////////////
#include <stdio.h>

float value_1=0,value_2=0;

int main()
{
	printf("Enter two number(float): ");
	scanf("%f",&value_1);
	scanf("%f",&value_2);
	printf("product = %lf",(value_1*value_2));
	
	return 0;
}