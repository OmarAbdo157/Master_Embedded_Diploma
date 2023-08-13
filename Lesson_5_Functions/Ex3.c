/******************************************************************************
 * Unit 2    : Lesson5_Functions >> Assignment4
 * File Name : Ex3
 * Data      : 30/7/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Reverse Sentence by functions recursion
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Functions Deceleration Section Start ******* */
void reverse();
/* ********************** Functions Deceleration Section End ******* */

int main()
{
    // [1] we asking user to enter an input
    printf("Enter a sentence: ");

    // [2] we using function to do all after 
    reverse();
    return 0;
}

/* ********************** Functions Definition Section Start ************* */
void reverse()
{
    //local variable in function scope
    char letter;

    // asking tto enter input here from user
    scanf("%c", &letter);

    // if condition to to the task
    if (letter != '\n')
    {
        reverse();
        printf("%c", letter);
    }
}

/* ********************** Functions Definition Section End ************* */