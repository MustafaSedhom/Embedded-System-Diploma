//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_2
//==========================================
////////////////////////////////////////////
// Write c programming to add two distance ( in inch-foot) sydtem using structure.
////////////////////////////////////////////
#include <stdio.h>
#pragma pack(1)
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    if (result.inches >= 12) {
        result.feet += (int)result.inches / 12;
        result.inches = result.inches - ((int)result.inches / 12) * 12;
    }
    
    return result;
}

int main() {
    struct Distance d1, d2, result;
    
    // Input the first distance
    printf("Enter information for 1st distance : ");
    printf("\nEnter feet : ");
    scanf("%d", &d1.feet);
    printf("Enter inch : ");
    scanf("%f", &d1.inches);
    
    // Input the second distance
    printf("Enter information for 2nd distance : ");
    printf("\nEnter feet : ");
    scanf("%d", &d2.feet);
    printf("Enter inch : ");
    scanf("%f", &d2.inches);
    
    // Add the distances
    result = addDistances(d1, d2);
    
    // Display the result
    printf("sum of distance : %d feet %f inches.\n", result.feet, result.inches);
    
    return 0;
}
