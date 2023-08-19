/******************************************************************************
 * Mid-Term  : Write C program >> Question 4
 * File Name : Q4.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to take a number and reverse all digits
 *****************************************************************************/
//----------------------------------------------------------------------------//
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ********************** Includes Section End   ********************** */
//----------------------------------------------------------------------------//
/* ********************** Functions Declaration Section Start ************* */
void reverse(char array[]);
/* ********************** Functions Declaration Section End ************* */
//----------------------------------------------------------------------------//
/* ********************** Arrays Section Start ******* */
char numbers[100];
/* ********************** Arrays Section End ******* */
//----------------------------------------------------------------------------//
int main()
{
    // First we take the number from the user
    printf("Enter number: ");
    scanf("%s",numbers);

    // Then we pass the number to our function 
    reverse(numbers);
    return 0;
}
//----------------------------------------------------------------------------//
/* ********************** Functions Definition Section Start ************* */
void reverse(char array[])
{
    int num_length, Index;

    // We save array length to get the start point of our loop
    num_length = strlen(array);

    // we print number after we reverse digits
    for (Index = (num_length - 1); Index >= 0; Index--)
    {
        printf("%c", array[Index]);
    }
}
/* ********************** Functions Definition Section End ************* */
//----------------------------------------------------------------------------//
