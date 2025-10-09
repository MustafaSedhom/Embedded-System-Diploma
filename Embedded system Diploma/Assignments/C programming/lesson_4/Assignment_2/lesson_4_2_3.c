//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_2
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to Reverse string without using library function.
////////////////////////////////////////////
#include <stdio.h>
#define lenght_of_string 50
char string[lenght_of_string] , reverse_string[lenght_of_string];
int lenght_input_string;
int main()
{
	printf("Enter a string (number of char { 1 -> %d } ) : ",lenght_of_string);
	gets(string);
	for (;string[lenght_input_string] != '\0'; lenght_input_string++);
	printf("lenght of string : %d\n",lenght_input_string);
	//revers string
    int i=0;
    for (; i < lenght_of_string; i++)
    {
    	reverse_string[i] = string[ ( ( lenght_input_string - 1) - i ) ];
    }
    reverse_string[i+1] = '\0';
    printf(" reverse string is : %s",reverse_string);
	return 0;
}