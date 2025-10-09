//==========================================
//Author : Mostafa Sedhom
//Created: 2025-02-10
//Mastering Embedded System Online Diploma
//learn in Depth
//lesson_6
//assignment_1
//Quiz_6
//==========================================
////////////////////////////////////////////
// write the output of this program.
////////////////////////////////////////////
/////////////////output/////////////////////
// size of union =32 byte
// size of structure = 40 byte
////////////////////////////////////////////
#include <stdio.h>
#pragma pack(1)
union job
{
    char name[32];//32 byte
    float salary;//4 byte
    int worker_no;//4 byte
}u;// u = 32 byte
struct job_1
{
    char name[32];//32 byte
    float salary;//4 byte
    int worker_no;// 4 byte
}s;// s=32+4+4 = 40 byte
int main()
{
    printf("size of union =%d byte",sizeof(u));//32 byte
    printf("\nsizeof structure =%d byte",sizeof(s));// 40 byte
    return 0;
}