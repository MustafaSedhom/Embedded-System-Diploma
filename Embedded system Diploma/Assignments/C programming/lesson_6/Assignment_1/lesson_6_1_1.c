//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to store information(name,roll and marks)of a student using structure.
////////////////////////////////////////////
#include <stdio.h>

#pragma pack(1)
struct student_information
{
	char name[40];
	int roll;
	float marks;
}student;

int main()
{
	//set student information
	printf("Enter information of student : ");
	printf("\nEnter name : ");gets(student.name);
	printf("Enter roll number : ");scanf("%d",&student.roll);
	printf("Enter marks : ");scanf("%f",&student.marks);
	//print student information
	printf("student information : ");
	printf("\nname : %s",student.name);
	printf("\nRoll : %d",student.roll);
	printf("\nmarks : %f",student.marks);	
	return 0;
}