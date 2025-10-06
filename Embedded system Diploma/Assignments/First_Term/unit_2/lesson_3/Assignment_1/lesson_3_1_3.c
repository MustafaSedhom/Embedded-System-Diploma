//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_1
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to Add two integers.
////////////////////////////////////////////
#include<stdio.h>

int value_1=0,value_2=0;


int main(int argc, char const *argv[])
{
	/* code */
	printf("Enter two integer:");
	scanf("%d",&value_1);
	scanf("%d",&value_2);
	printf("sum = %d",(value_1+value_2));
	return 0;
}