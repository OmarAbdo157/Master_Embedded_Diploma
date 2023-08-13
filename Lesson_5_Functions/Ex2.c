/******************************************************************************
 * Unit 2    : Lesson5_Functions >> Assignment4
 * File Name : Ex2
 * Data      : 30/7/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Calculate Factorial of a Number Using Recursion
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int original_number;
/* ********************** Global Variables  Section End   ************* */

/* ********************** Functions Deceleration Section Start ******* */
int get_factorial(int num);
/* ********************** Functions Deceleration Section End ******* */

int main()
{
    // [-] We take number from user to get factorial 
    printf("Enter an positive integer: ");
    scanf("%i",&original_number);

    // [-] Printing answer after using the function 
    printf("Factorial of %i = %i",original_number ,get_factorial(original_number));
}

/* ********************** Functions Definition Section Start ************* */
int get_factorial(int num){
    if (num > 1)
    {
        return num * (get_factorial(num-1));
    }else {
        return 1;
    }
}
/* ********************** Functions Definition Section End ************* */