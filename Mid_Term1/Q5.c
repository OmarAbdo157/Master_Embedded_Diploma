/******************************************************************************
 * Mid-Term    : Write C program >> Question 5
 * File Name : Q5.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to count number of ones in binary number
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Functions Declaration Section Start ************* */
void ones(int n);
/* ********************** Functions Declaration Section End ************* */

/* ********************** Arrays Section Start ******* */
int result[64];
/* ********************** Arrays Section End ******* */

/* ********************** Global Variables Section Start ******* */
int input_number;
/* ********************** Global Variables Section End ******* */
int main()
{
    //[1] We take input number from user
    printf("Enter number: ");
    scanf("%i", &input_number);
    //[2] We pass the value to our function
    ones(input_number);
}
/* ********************** Functions Definition Section Start ************* */
void ones(int n)
{
    int Index, sum = 0;
    //[3] We get the number binary first 
    for (Index = 0; Index < 16; Index++)
    {
        if ((n % 2) == 1)
        {
            result[Index] = n % 2;
            n = (n - 1) / 2;
        }
        else if ((n % 2) == 0)
        {
            result[Index] = n % 2;
            n = n / 2;
        }
    }
    //[4] We sum all ones 
    for (Index = 0; Index < 64; Index++)
    {
        sum += result[Index];
    }
    //[5] Finally we print our result 
    printf("%i", sum);
};
/* ********************** Functions Definition Section End ************* */

