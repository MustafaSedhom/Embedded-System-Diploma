//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to store information of students using structure.
////////////////////////////////////////////
#include <stdio.h>
#pragma pack(1)

struct student_marks
{
	char name[30];
	int roll;
	int marks;
};
int main()
{
	struct student_marks student[10];
	//scan data from user about all students
	printf("Enter information of student : ");
	for (int i = 0; i < 10;i++)
	{
		printf("\nfor roll number %d",i+1);
		printf("\nEnter name : ");scanf("%s",&student[i].name);
		student[i].roll = i+1;
		printf("Enter marks : ");scanf("%d",&student[i].marks);
	}
	// print all students
	printf("Displaying information of student : ");
	for (int i = 0; i < sizeof(student)/sizeof(student[0]);i++)
	{
		printf("\nfor roll number %d",i+1);
		printf("\nname : %s",student[i].name);
		printf("\nmarks : %d",student[i].marks);
	}
	return 0;
}