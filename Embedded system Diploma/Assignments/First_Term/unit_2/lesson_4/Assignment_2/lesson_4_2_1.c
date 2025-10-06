//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_2
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to find the frequancy of char in a string.
////////////////////////////////////////////
#include <stdio.h>
#define lenght_of_string 50
char string[lenght_of_string];
char user_input_char , counter_char;
int main()
{
	printf("Enter a string (number of char { 1 -> %d } ) : ",lenght_of_string);
	gets(string);
	printf("Enter a character to find frequancy : ");
	scanf("%c",&user_input_char);
	for (int i = 0; i < lenght_of_string && string[i] != '\0'; i++)
	{
		if(user_input_char == string[i]) counter_char++;
	}
	printf("frequancy of %c : %d",user_input_char,counter_char);
	
	return 0;
}