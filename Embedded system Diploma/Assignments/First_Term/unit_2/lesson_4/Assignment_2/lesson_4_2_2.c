//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_2
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to find the length of string.
////////////////////////////////////////////
#include <stdio.h>
#define lenght_of_string 50
char string[lenght_of_string];
int i;
int main()
{
	printf("Enter a string (number of char { 1 -> %d } ) : ",lenght_of_string);
	gets(string);
	for (;string[i] != '\0'; i++);
	printf("lenght of string : %d",i);
	
	return 0;
}