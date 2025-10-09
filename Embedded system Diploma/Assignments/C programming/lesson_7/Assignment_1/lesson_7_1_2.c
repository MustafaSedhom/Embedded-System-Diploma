//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_7
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to print all the alphabets using a pointer.
////////////////////////////////////////////
#include <stdio.h>
int main()
{
	//A=65 ,Z=90
     char word[26];
     char*ptr=word;
     for (int i = 65; i < 26+65; i++)
     {
     	*(ptr + (i - 65)) = i;
     }
     for (int i = 0; i < 26; i++)
     {
     	printf("%c\t",*ptr);
     	ptr++;
     }
	return 0;
}