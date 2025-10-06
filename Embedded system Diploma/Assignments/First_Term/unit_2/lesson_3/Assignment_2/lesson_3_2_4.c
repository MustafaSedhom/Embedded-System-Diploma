//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to check the number is positive or negative.
////////////////////////////////////////////
#include <stdio.h>
float number; 
int main()
{
	printf("enter a numbers: ");
	scanf("%f",&number);
	if(number==0)printf("you entered a zero");
	else if(number>0)printf("%f is a positive",number);
	else if(number<0)printf("%f is a negative",number);
	
	return 0;
}