/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex4
 * Data      : 16/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Check if the number positive or negative 
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
float numb;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // Ask user to type number
    printf("Enter a number:");
    scanf("%f", &numb);
    //check if number bigger than 0 
    if (numb > 0 ) /* condition */
    {
        /* code */
        printf("%0.2f is positive", numb);
    }
    //check if number equal to  0 
    else if (numb == 0 ) /* condition */
    {
        /* code */
        printf("You entered %0.0f", numb);
    }
    //check if number smaller than 0 
    else 
    {
        /* code */
        printf("%0.2f is negative", numb);
    }
    
}
