//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_1
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to insert an element in an Array.
////////////////////////////////////////////
#include<stdio.h>
#define limit_number 30
int user_input , elment_counter , value_insert ,value_location;
int matrix[limit_number];
int main()
{
	printf("enter number of elments (1->%d) : ",limit_number);
	scanf("%d",&user_input);
	// print cuurent matrix;
	printf("your matrix is : { ");
	for (int i = 0; i < user_input; i++)
	{
		matrix[i] = i+1;
		printf("%d",matrix[i]);
		if(i != (user_input-1))printf(" , ");
	}
	printf(" }");
	//insert
	printf("\nEnter the elment to be inserted : ");
	scanf("%d",&value_insert);
	printf("Enter the location : ");
	scanf("%d",&value_location);
    // input new value in matrix
    for (int i = 0; i < user_input+1; i++)
	{
		if(i == ( value_location - 1 )) matrix[i] = value_insert;
		else if(i < value_location) matrix[i] = i + 1 ;
		else matrix[i] = i;
	}
	// print after insert_value in matrix;
	printf("your new matrix is : { ");
	for (int i = 0; i < user_input+1; i++)
	{
		printf("%d",matrix[i]);
		if(i != (user_input))printf(" , ");
	}
	printf(" }");
	return 0;
}