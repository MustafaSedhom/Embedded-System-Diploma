//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_5
//assignment_1
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to prime number between two intrvals by making user-defined function.
////////////////////////////////////////////
#include <stdio.h>
int number_1 , number_2;
int is_number_prime(int);
void prime_function();

int main()
{	
	prime_function();
	return 0;
}
int is_number_prime(int number)
{
	if(number <= 1) return 0 ;
	for (int i = 2; i < number / 2 ; i++)
	{
		if ((number % i) == 0) return 0;
	}
	return 1 ;
}

void prime_function()
{
	printf("Enter two numbers (intervals) : ");
	scanf("%d%d",&number_1,&number_2);
	printf("prime numbers between %d and %d are : ",number_1,number_2);
	for (int i = number_1; i < number_2; i++)
	{
		if(is_number_prime(i)) printf(" %d ",i);
	}
}