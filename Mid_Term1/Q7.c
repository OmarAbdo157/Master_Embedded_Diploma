/******************************************************************************
 * Mid-Term    : Write C program >> Question 7
 * File Name : Q7.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to sum numbers from 1 to 100 (without loop)
 *****************************************************************************/
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */
/* ********************** Functions Declaration Section Start ************* */
int sum1to100(void);
/* ********************** Functions Declaration Section End ************* */
int main()
{
printf("%i", sum1to100());
}
/* ********************** Functions Definition Section Start ************* */
int sum1to100(void){
    int sum ;
    // Formula to get our result
    sum = 100*(100+1)/2;
    return sum ;
    // !! note i can solve it by recursion if inputs needed 
} 
/* ********************** Functions Definition Section End ************* */
