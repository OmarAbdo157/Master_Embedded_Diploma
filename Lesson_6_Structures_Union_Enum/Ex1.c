/******************************************************************************
 * Unit 2    : Lesson6_Functions >> Assignment 5
 * File Name : Ex1.c
 * Data      : 21/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : C program to store information of a student using structure
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Structure Declaration Section Start ************** */
struct SStudent
{
    char m_name[50];
    int m_rollNumber;
    float m_marks;
} Object;

/* ********************** Structure Declaration Section End   ************* */

int main()
{
    printf("Enter information of students\n");

    printf("\nEnter name: ");
    scanf("%s", &Object.m_name);

    printf("Enter roll number: ");
    scanf("%i", &Object.m_rollNumber);

    printf("\nEnter marks: ");
    scanf("%f", &Object.m_marks);

    printf("\nDisplaying Information :-\n");
    printf("Name: %s\n", Object.m_name);
    printf("Roll: %i\n", Object.m_rollNumber);
    printf("Marks: %0.2f\n", Object.m_marks);
    return 0;
}
