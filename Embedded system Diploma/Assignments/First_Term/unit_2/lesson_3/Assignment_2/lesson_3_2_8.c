//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_8
//==========================================
////////////////////////////////////////////
// Write c programming to make a simple calculator use switch case .
////////////////////////////////////////////
#include <stdio.h>
float number_1,number_2;
char operation;
int main()
{
	printf("enter operation either + or - or * or / : ");
	scanf("%c",&operation);
	printf("Enter two operands: ");
	scanf("%f",&number_1);
	scanf("%f",&number_2);

	switch(operation)
	{
	case '+':
		printf("%f + %f = %f",number_1,number_2,(number_1+number_2));
		break;
    case '-':
    	printf("%f - %f = %f",number_1,number_2,(number_1-number_2));
    	break;
    case '*':
    	printf("%f * %f = %f",number_1,number_2,(number_1*number_2));
    	break;
    case '/':
    	if(number_2==0)
    		printf("can't divide by zero");
    	else
    		printf("%f / %f = %f",number_1,number_2,(number_1/number_2));
    	break;
    default:
    	printf("there is not operation of this name \" %c \"",operation);
    	printf("please input correct operation like (+,-,*,/)");
    	break;
	}
	
	return 0;
}