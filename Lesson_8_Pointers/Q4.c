/******************************************************************************
 * Unit 2    : Lesson_8_Pointers >> Assignment 6
 * File Name : Q4.c
 * Data      : 11/9/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Write a program in C to print the elements of an array in reverse order. 
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>

/* ********************** Includes Section End   ********************** */

/* ********************** Global Section Start   ************* */
int NumberOfElements, Index, *ptr;
int elements[15];
/* ********************** Global Section End   ************* */
int main()
{
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%i", &NumberOfElements);
    printf("Input %i number of elements in the array\n", NumberOfElements);

    for ( Index = 0; Index < NumberOfElements; Index++)
    {
        printf("element - %i : ", Index + 1);
        scanf("%i", &elements[Index]);
    }

    printf("\nThe elements of array in reverse order are :\n");
    for ( ptr = elements + NumberOfElements -1,Index = NumberOfElements;  ptr >= elements,Index > 0; Index-- , ptr--)
    {
        printf("element - %i : %i\n", Index, *ptr);
        
    }


    return 0;
}
