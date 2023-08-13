/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex7
 * Data      : 17/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * Brief     : Calculate Factorial Of A Number
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int numb, i, sum = 1;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // We Take An Integer From The User
    printf("Enter an integer :");
    scanf("%i", &numb);
    // loop
    if (numb == 0) // // If The User Put 0
    {
        printf("Factorial = 1");
    }
    else if (numb < 0) // If The User Put Negative Number
    {
        printf("Error!!! Factorial of negative numbers doesn't exist");
    }
    else if (numb > 0) // If The User Put Positive Number
    {
        for (i = numb; i > 0; --i)
        {
            sum *= i;
        }
        // print loop last output
        printf("Sum = %i", sum);

    }
    else // If The User Put Character Or Some Thing Else
    {
        printf("Not Invalid Input");
    }
}