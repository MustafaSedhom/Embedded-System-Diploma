//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to add two complex number by passing structure to a function.
////////////////////////////////////////////
#include <stdio.h>
#pragma pack(1)
struct complex_number
{
	float real_number;
	float imigne_number;
};

struct complex_number add(struct complex_number ,struct complex_number);
int main()
{
	struct complex_number value_1,value_2,addition;
    //first number
	printf(" for 1st complex number\n");
	printf("Enter real and imaginary respectively : ");
	scanf("%f%f",&value_1.real_number ,&value_1.imigne_number);
	//second number
	printf(" for 1st complex number\n");
	printf("Enter real and imaginary respectively : ");
	scanf("%f%f",&value_2.real_number ,&value_2.imigne_number);
	//addition
	addition = add(value_1,value_2);
	printf("sum : %f+%fi",addition.real_number,addition.imigne_number);


	return 0;
}
struct complex_number add(struct complex_number number_1 , struct complex_number number_2)
{
	struct complex_number sum;

	sum.real_number = number_1.real_number + number_2.real_number;
	sum.imigne_number = number_1.imigne_number + number_2.imigne_number;
    return sum ;
}