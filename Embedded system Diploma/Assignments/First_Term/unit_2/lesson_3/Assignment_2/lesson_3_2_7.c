//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_7
//==========================================
////////////////////////////////////////////
// Write c programming to find afactorial of a numbrer.
////////////////////////////////////////////
#include <stdio.h>
int number; 
unsigned long long sum=1;
int main()
{
	printf("enter a number: ");
	scanf("%d",&number);

    if(number==0){printf("result=0");goto go;}
    else if (number<0){printf("error factorial of negative number doesn't exist");goto go;}
    for (int i = 1; i <= number; ++i)
	{
		sum*=i;
	}
	printf("result= %llu",sum);
	go:
	return 0;
}