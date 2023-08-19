/******************************************************************************
 * Mid-Term  : Write C program >> Question
 * File Name : Q3.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to print all prime numbers between two numbers?
 *****************************************************************************/
//----------------------------------------------------------------------------//
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */
//----------------------------------------------------------------------------//
/* ********************** Global Variables Section Start ******* */
int start, end, Index;
/* ********************** Global Variables Section End ******* */
//----------------------------------------------------------------------------//
/* ********************** Functions Declaration Section Start ************* */
void primary(int s, int e);
/* ********************** Functions Declaration Section End ************* */
//----------------------------------------------------------------------------//
int main()
{
    // [1] we inputs from the user (Start Number and End Number)
    printf("Enter start number: ");
    scanf("%i", &start);
    printf("Enter End number: ");
    scanf("%i", &end);

    // [2] Then we pass it to our function
    primary(start, end);
}
//----------------------------------------------------------------------------//
/* ********************** Functions Definition Section Start ************* */
void primary(int s, int e)
{
    int Index;
    // [3] We make loop to check every number
    for (Index = s; Index < e; Index++)
    {
        // [-] Special case 2 is prime number
        if (Index == 2)
        {
            printf("%i ", Index);
        }
        if ((Index % 2) == 1)
        {
            printf("%i ", Index);
        }
    }
}
/* ********************** Functions Definition Section End ************* */
