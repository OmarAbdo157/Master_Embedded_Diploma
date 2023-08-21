/******************************************************************************
 * Unit 2    : Lesson6_Structures_Union_Enum >> Assignment 5
 * File Name : Ex4.c
 * Data      : 21/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : C program to store infomation for students using structure
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Structure Declaration Section Start ************** */
struct SStudent
{
    int m_Roll;
    char m_Name[20];
    int m_Marks;
};
/* ********************** Structure Declaration Section End   ************* */

/* ********************** Array Declaration Section Start ************** */
struct SStudent student[10];
/* ********************** Function Declaration Section End   ************* */
int main()
{
    /* ********************** Local Variables Section Start ************** */
    int Index;
    /* ********************** Local Variables Section End   ************* */
    printf("Enter information of students: \n");
    for (Index = 0; Index < 10; Index++)
    {
        printf("\nFor roll number %i\n", Index + 1);
        student[Index].m_Roll = Index + 1;
        printf("Enter name: ");
        scanf("%s", &student[Index].m_Name);
        printf("Enter marks: ");
        scanf("%i", &student[Index].m_Marks);
    }
    printf("Displaying information of student: \n");
    for (Index = 0; Index < 10; Index++)
    {
        printf("\nInformation for roll number: %i\n", student[Index].m_Roll);
        printf("Name: %s\n", student[Index].m_Name);
        printf("Marks: %i", student[Index].m_Marks);
    }
    return 0;
}
