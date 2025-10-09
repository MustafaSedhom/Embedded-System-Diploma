//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_5
//==========================================
////////////////////////////////////////////
// Write c programming to find area of circle passing arguments to macros.
////////////////////////////////////////////
#include <stdio.h>
#define PI 3.14159
#define AREA_OF_CIRCLE(radius) (PI * (radius) * (radius))

int main() 
{
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = AREA_OF_CIRCLE(radius);
    
    printf("Area : %f\n", area);
    
    return 0;
}