/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex3
 * Data      : 16/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Find The Largest Number Between 3 Numbers
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
float num1, num2, num3;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // Take the 3 numbers from user to compare
    printf("Enter three numbers :");
    scanf("%f%f%f", &num1, &num2, &num3);
    // check if number 1 is the largest
    if (num1 >= num2 && num1 >= num3) /* condition */
    {
        /* code */
        printf("%0.2f", num1);
    }
    // check if number 2 is the largest
    else if (num2 >= num1 && num2 >= num3) /* condition */
    {
        /* code */
        printf("%0.2f", num2);
    }
    // if the previous conditions not true its 100% number 3 is the largest one or equal to the largest one or equal to all numbers
    else
    {
        printf("%0.2f", num3);
    }
}
