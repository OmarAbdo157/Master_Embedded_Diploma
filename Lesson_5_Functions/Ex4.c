/******************************************************************************
 * Unit 2    : Lesson5_Functions >> Assignment4
 * File Name : Ex4
 * Data      : 12/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : calculate power of a number using recursion
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Functions Deceleration Section Start ******* */
int power(int base, int Power_number2);
/* ********************** Functions Deceleration Section End ******* */
int main()
{
    // local variables.
    int base_number,power_number;
    //[1] asking user to enter base number. 
    printf("Enter base number: ");
    scanf("%i",&base_number);

    //[2] asking user to enter power number. 
    printf("Enter power number: ");
    scanf("%i",&power_number);

    //[3] print result after using our function. 
    printf("%i^%i = %i",base_number,power_number,power(base_number, power_number));  
}
/* ********************** Functions Definition Section Start ************* */
int power(int base, int Power_number2){
    if (Power_number2 == 0)
    {
        return 1; 
        // as any number^0 = 1.
    }else if (Power_number2 == 1)
    {
        return base;
        // as any number^1 = the same number.
    }

    // then we use recursion.  
    return base*power(base,Power_number2- 1);
}
/* ********************** Functions Definition Section End ************* */