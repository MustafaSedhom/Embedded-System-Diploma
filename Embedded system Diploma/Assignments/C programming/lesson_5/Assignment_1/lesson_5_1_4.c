//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_5
//assignment_1
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to calculate the power of anumber using recursion.
////////////////////////////////////////////
#include <stdio.h>
int base_number;
unsigned int power_number;
int calc_power(int base_num , unsigned int power_number);
int main()
{	
	printf("Enter base number : ");
	scanf("%d",&base_number);
	printf("Enter power number (positive) : ");
	scanf("%d",&power_number);
	printf("%d ^ %d = %d",base_number,power_number,calc_power(base_number,power_number));
	return 0;
}
int calc_power(int base_num , unsigned int power_number)
{
	if(power_number == 0) return 1;
	else
	{
		return(base_num*calc_power(base_num,power_number-1));
	}
}