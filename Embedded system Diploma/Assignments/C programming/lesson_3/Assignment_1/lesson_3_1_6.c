//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_6
//==========================================
////////////////////////////////////////////
// Write c programming to find ASCII value of character.
////////////////////////////////////////////
#include <stdio.h>
char char_ASCII;
int main()
{
	printf("enter a character: ");
	scanf("%c",&char_ASCII);
	printf("ASCII value of %C is: %d",char_ASCII,char_ASCII);
	
	return 0;
}