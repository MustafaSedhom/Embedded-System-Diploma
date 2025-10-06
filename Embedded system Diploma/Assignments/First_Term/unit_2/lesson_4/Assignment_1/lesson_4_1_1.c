//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_1
//Quiz_1
//==========================================
////////////////////////////////////////////
// Write c programming to find sum of two matrix of order 2*2 using multidimentional array where, elements of matrix are entered by user.
////////////////////////////////////////////
#include <stdio.h>

#define rows_matrix 2
#define cols_matrix 2

float matrix_1[rows_matrix][cols_matrix],matrix_2[rows_matrix][cols_matrix],matrix_sum[rows_matrix][cols_matrix];
int main()
{
	//scan first matrix 
	printf("enter elements of 1st matrix: \n");
	for (int rows = 0; rows < ((sizeof(matrix_1))/(sizeof(matrix_1[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_1))/(sizeof(matrix_1[0]))); colums++)
		{
			printf("enter elment of matrix[%d][%d] : ",rows,colums);
			scanf("%f",&matrix_1[rows][colums]);
		}
	}
	//scan second matrix
	printf("enter elements of 2nd matrix: \n");
	for (int rows = 0; rows < ((sizeof(matrix_2))/(sizeof(matrix_2[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_2))/(sizeof(matrix_2[0]))); colums++)
		{
			printf("enter elment of matrix[%d][%d] : ",rows,colums);
			scanf("%f",&matrix_2[rows][colums]);
		}
	}
	//print first matrix 
	printf("your 1st matrix is : \n");
	for (int rows = 0; rows < ((sizeof(matrix_1))/(sizeof(matrix_1[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_1))/(sizeof(matrix_1[0]))); colums++)
		{
			if(colums==0) printf("{");
			printf("%f",matrix_1[rows][colums]);
			if(colums!=cols_matrix-1)printf(" , ");
			if(colums==cols_matrix-1)printf("}\n");
		}
	}
	printf("\n");
	//print second matrix
	printf("your 2nd matrix is : \n");
	for (int rows = 0; rows < ((sizeof(matrix_2))/(sizeof(matrix_2[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_2))/(sizeof(matrix_2[0]))); colums++)
		{
			if(colums==0) printf("{");
			printf("%f",matrix_2[rows][colums]);
			if(colums!=cols_matrix-1)printf(" , ");
			if(colums==cols_matrix-1)printf("}\n");
		}
	}
	printf("\n");
	//sum two matrixes
	for (int rows = 0; rows < ((sizeof(matrix_sum))/(sizeof(matrix_sum[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_sum))/(sizeof(matrix_sum[0]))); colums++)
		{
			matrix_sum[rows][colums] = matrix_1[rows][colums] + matrix_2[rows][colums];
		}
	}
	//print sum matrix
	printf("\nsum matrix is : \n");
	for (int rows = 0; rows < ((sizeof(matrix_sum))/(sizeof(matrix_sum[0]))); rows++)
	{
		for (int colums = 0; colums < ((sizeof(matrix_sum))/(sizeof(matrix_sum[0]))); colums++)
		{
			if(colums==0) printf("{");
			printf("%f",matrix_sum[rows][colums]);
			if(colums!=cols_matrix-1)printf(" , ");
			if(colums==cols_matrix-1)printf("}\n");
		}
	}
	return 0;
}