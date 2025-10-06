//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_5
//==========================================
////////////////////////////////////////////
// Write c programming to check whether a character is an alphabet ar not .
////////////////////////////////////////////
#include <stdio.h>
char character; 
int main()
{
	printf("enter the three numbers: ");
	scanf("%c",&character);
	if((character >='a' && character <='z')||(character >='A' && character <='Z' ))
	{
		printf("%c is a character",character);
	}
	else
	{
		printf("%c is not a character",character);
	}
	
	return 0;
}