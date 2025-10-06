//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_1
//Quiz_5
//==========================================
////////////////////////////////////////////
// Write c programming to serach an elment in array.
////////////////////////////////////////////
#include <stdio.h>
#define limit_number 30
int input_user_elment , input_user_location;
int matrix[limit_number];
int main()
{
	printf("Enter nomber of elments(0 -> %d) : ",limit_number);
	scanf("%d",&input_user_elment);
	// print cuurent matrix;
	printf("your matrix is : { ");
	for (int i = 0; i < input_user_elment; i++)
	{
		matrix[i] = ( 2 *( i + 1 ) );
		printf("%d",matrix[i]);
		if(i != (input_user_elment-1))printf(" , ");
	}
	printf(" }");
	///////////
	printf("\nEnter the elment to be location : ");
	scanf("%d",&input_user_location);
	// locate this variable
    for (int i = 0; i < input_user_elment; i++)
	{
		if(matrix[i] ==  input_user_location)
		{
			printf(" nomber found at location : %d",i+1);
		}
	}
	return 0;
}