
//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to print entered by a user.
////////////////////////////////////////////
#include <stdio.h>

int input_value=0;

int main(int argc, char const *argv[])
{
	printf("enter a integer: ");
	scanf("%d",&input_value);
	printf("you entered: %d",input_value);
	return 0;
}