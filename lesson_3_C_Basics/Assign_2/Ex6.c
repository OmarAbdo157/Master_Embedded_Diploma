/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex6
 * Data      : 17/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Calculate Sum Of Natural Numbers
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int numb, i, sum;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // we take an integer from the user
    printf("Enter an integer :");
    scanf("%i", &numb);
    // loop
    for (i = numb; i > 0; --i)
    {
        sum += i;
    }
    // print loop last output
    printf("Sum = %i", sum);
}