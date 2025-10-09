//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_7
//assignment_1
//Quiz_5
//==========================================
////////////////////////////////////////////
// Write c programming to show a pointer an array which contents are pointer to structure.
////////////////////////////////////////////
#include <stdio.h>
#pragma pack(1)
struct students_id
{
	char name[30];
	int ID_number;
};
void print_ID(struct students_id* ID);
int main()
{
	struct students_id ID = {"Ahmed",1002};
	print_ID(&ID);
	return 0;
}
void print_ID(struct students_id* ID)
{
	printf("student name : %s\n",ID->name);
	printf("student ID : %d\n",ID->ID_number);
}