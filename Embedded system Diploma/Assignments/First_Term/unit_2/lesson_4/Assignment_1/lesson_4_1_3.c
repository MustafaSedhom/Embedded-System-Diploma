//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_4
//assignment_1
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to find Transpose of a matrix.
////////////////////////////////////////////
#include<stdio.h>
#define rows_arr 5 //limit
#define col_arr  5 //limit
float my_arr[rows_arr][col_arr];
int row_user,colums_user;
int main()
{
	printf("enter matrix rows and colums : ");
	scanf("%d%d",&row_user,&colums_user);
	//enter matrix from user
	printf("enter  elment (float)(float): \n");
	for (int Row = 0; Row < row_user; Row++)
	{
		for (int Col = 0; Col < colums_user; Col++)
		{
			printf("input element of matrix[%d][%d]: ",Row+1,Col+1);
			scanf("%f",&my_arr[Row][Col]);
		}
	}
	//show matrix
	printf("your matrix is: \n");
	for (int Row = 0; Row < row_user; Row++)
	{
		for (int Col = 0; Col < colums_user; Col++)
		{
			if(Col==0)printf("{");
			printf("%f",my_arr[Row][Col]);
			if(Col!=(colums_user-1))printf(" , ");
			if(Col==(colums_user-1))printf("}\n");
		}
	}
	//transopse matrix and show it
	printf("your  transopse matrix is: \n");
	for (int Row = 0; Row < row_user; Row++)
	{
		for (int Col = 0; Col < colums_user; Col++)
		{
			
		}
	}

	return 0;
}