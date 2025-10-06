//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_6
//==========================================
////////////////////////////////////////////
// Write c programming to calculate sum of natural numbers.
////////////////////////////////////////////
#include <stdio.h>
int number;
int sum; 
int main()
{
	printf("enter a numbers: ");
	scanf("%d",&number);
	for (int i = number; i>=0; i--)
	{
		sum += i; 
	}
	printf("%d",sum);
	return 0;
}