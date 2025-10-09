//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_7
//assignment_1
//Quiz_3
//==========================================
////////////////////////////////////////////
// Write c programming to print astring revrse using pointer.
////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

#define length_arr 100


int main()
{
    char input_string[length_arr];
    char reverse_string[length_arr];

    printf("Input a string: ");
    scanf("%s", input_string);
    reverseString(input_string, reverse_string, strlen(input_string));

    printf("Reverse of the string is: %s\n", reverse_string);

    return 0;
}
void reverseString(char* input, char* reverse, int length)
{
    for (int i = 0; i < length; i++)
    {
        *(reverse + i) = *(input + length - i - 1);
    }
    *(reverse + length) = '\0';
}