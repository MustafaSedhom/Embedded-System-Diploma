//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to find the largest number among three numbers.
////////////////////////////////////////////
#include <stdio.h>
float number_1,number_2,number_3; 
int main()
{
	printf("enter the three numbers: ");
	scanf("%f",&number_1);
	scanf("%f",&number_2);
	scanf("%f",&number_3);
	if (number_1>number_2)
	{
		if (number_1>number_3)
		{
			printf("largest number is %f",number_1);
		}
		else
		{
			printf("largest number is %f",number_3);

		}
	}
	else
	{
		if (number_2>number_3)
		{
			printf("largest number is %f",number_2);
		}
		else
		{
			printf("largest number is %f",number_3);

		}
	}
	
	return 0;
}