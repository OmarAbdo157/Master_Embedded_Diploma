/******************************************************************************
 * Mid-Term    : Write C program >> Question 1
 * File Name : Q1.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to take a number and sum all digits
 *****************************************************************************/
//----------------------------------------------------------------------------//
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ********************** Includes Section End   ********************** */
//----------------------------------------------------------------------------//
/* ********************** Arrays Section Start ******* */
char number_as_string[100];
/* ********************** Arrays Section End ******* */
/* ********************** Functions Declaration Section Start ************* */
void sum_digits(char array[]);
/* ********************** Functions Declaration Section End ************* */
//----------------------------------------------------------------------------//
int main()
{
    //[1] We take number that user input
    printf("Enter number (atleast 2 digits): ");
    scanf("%s",number_as_string);
    sum_digits(number_as_string);
    return 0;
}
/* ********************** Functions Definition Section Start ************* */
void sum_digits(char array[]){
    // Local Variables.
    int Index,sum = 0;
    //[2] We make array (its size = 1) to save every digit in
    char save[1];
    //[3] We make for loop to save every digit from numer that user input 
    for (Index = 0; Index < 20; Index++)
    {
        //[4] We save every digit in index[0] in save array then we convert it to number  
        save[0] = array[Index];
        //[5] We add every digit in int variable.
        sum += atoi(save);
    }
    //[6] Finally, we print final value
    printf("%d", sum);
}
/* ********************** Functions Definition Section End ************* */
//----------------------------------------------------------------------------//

