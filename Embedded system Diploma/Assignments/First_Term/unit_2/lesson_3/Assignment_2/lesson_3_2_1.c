//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to check whether a number is even or odd.
////////////////////////////////////////////
#include <stdio.h>
int number; 
int main()
{
	printf("enter an integer you want to check: ");
	scanf("%d",&number);
	printf("%d is %s",number,(((number%2)==0)?"even":"odd"));
	
	return 0;
}