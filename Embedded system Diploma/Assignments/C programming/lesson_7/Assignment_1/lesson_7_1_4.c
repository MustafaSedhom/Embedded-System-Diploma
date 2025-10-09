//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_7
//assignment_1
//Quiz_4
//==========================================
////////////////////////////////////////////
// Write c programming to print the element of an array in reverse order.
////////////////////////////////////////////
#include <stdio.h>
#define max_len 15
int main()
{
	int input_num, num[max_len];
	int* ptr=num;
	printf("Input the number of elment to store in the array (max %d) : ",max_len);
	scanf("%d",&input_num);
	printf("Input %d number of elment in the array : \n",max_len);
	for (int i = 0; i < input_num; i++)
	{
		*(ptr+i) = i+2;
	}
	for (int i = 0; i < input_num; i++)
	{
		printf("elment-%d : %d\n",i+1,*(ptr+i));
	}
	printf("the elment of array in reserved order are: \n");
	for (int i = 0; i < input_num; i++)
	{
		printf("elment-%d : %d\n",input_num-i,*(input_num+ptr-i-1));
	}

	return 0;
}