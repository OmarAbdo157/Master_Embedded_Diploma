/******************************************************************************
 * Mid-Term    : Write C program >> Question 2
 * File Name : Q2.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to take an integer number and calculate it's square root?
 *****************************************************************************/
//----------------------------------------------------------------------------//
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */
//----------------------------------------------------------------------------//
/* ********************** Global Variables Section Start ******* */
unsigned int input_number;
/* ********************** Global Variables Section End ******* */
//----------------------------------------------------------------------------//
/* ********************** Functions Declaration Section Start ************* */
float sqroot(int n);
/* ********************** Functions Declaration Section End ************* */
//----------------------------------------------------------------------------//
int main()
{
    // [1] We take the input from the user
    printf("Enter the number: ");
    scanf("%i", &input_number);

    // [2] We put the input in our function
    sqroot(input_number);
    return 0;
}
//----------------------------------------------------------------------------//
/* ********************** Functions Definition Section Start ************* */
float sqroot(int n)
{
    // We make root number equal to our number so we can get root from 
    float root_number =  n ;

    // We make loop with condition to check if the root_number^2 == n
    while ((root_number * root_number) > n)
    {
        root_number -= 0.0001;
    }

    // when condition true we just print it
    printf("%0.3f", root_number);
}
/* ********************** Functions Definition Section End ************* */
