//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to take a number of element from user (where, n is specified by user),stores data in an array and calculates the average of those numbers.
////////////////////////////////////////////
#include <stdio.h>
#define limit_number 50 // put your limit number here
int input_number;
float array[limit_number];
double sum=0;
int main()
{
	printf("enter the numbers of data from(0 -> %d) : ",limit_number);
	scanf("%d",&input_number);
    if(input_number < 0 || input_number > limit_number) return 1;
	for (int i = 0; i < input_number; i++)
	{
		printf("Enter number (%d) : ",i+1);
		scanf("%f",&array[i]);
        sum += array[i];
	}
	printf("Avarage = %f",(sum/(double) input_number));
	
	return 0;
}