//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_5
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to Reverse a sentence using Recursion.
////////////////////////////////////////////
#include <stdio.h>
#include<string.h>
#define limit_lenght_string 30
char string[limit_lenght_string];
void Reverse(char str[] , int lenght ,int pointer);
int main()
{
	printf("Enter a sentence : ");
	gets(string);
	Reverse(string,strlen(string),0);
	
	return 0;
}
void Reverse(char str[],int lenght,int pointer)
{
	if(pointer >= lenght) return;
	Reverse(str,lenght,pointer+1);
	printf("%c",str[pointer]);
}