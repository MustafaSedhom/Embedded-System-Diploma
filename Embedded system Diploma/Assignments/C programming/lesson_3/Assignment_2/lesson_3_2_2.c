//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_3
//assignment_2
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to check vomel or consonant.
////////////////////////////////////////////
#include <stdio.h>
char character; 
int main()
{
	printf("enter an alphabet: ");
	scanf("%c",&character);
	if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'
		||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
	{
		printf("%c is a vowel",character);
	}
	else{
		printf("%c is a consonant",character);
	}
	
	return 0;
}