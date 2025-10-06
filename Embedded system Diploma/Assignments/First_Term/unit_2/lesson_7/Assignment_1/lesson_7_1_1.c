//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_7
//assignment_1
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to demonstrate how to handle the pointer in the program.
////////////////////////////////////////////
#include <stdio.h>
int main()
{
	//initilaze new variable
	int m=29;
    printf("addres of m : 0x%p\n",&m);
    printf("value of m : %d\n",m);
    //assigned pointer to address of m
    int* ab=&m;
    printf("now ab is assigned with the address of m.\n");
    printf("addres of m : 0x%p\n",ab);
    printf("value of m : %d\n",*ab);
    //change vaalue of m normally
    m=34;
    printf("the value of m assigned to 34 now.\n");
    printf("addres of m : 0x%p\n",&m);
    printf("value of m : %d\n",m);
    //change value of varabial by pointer
    *ab=7;
    printf("the pointer variable ab is assigned with the value 7 now.\n");
    printf("addres of m : 0x%p\n",ab);
    printf("value of m : %d\n",*ab);

	return 0;
}