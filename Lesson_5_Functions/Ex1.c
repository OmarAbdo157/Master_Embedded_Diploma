/******************************************************************************
 * Unit 2    : Lesson5_Functions >> Assignment4
 * File Name : Ex1
 * Data      : 30/7/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Find prime numbers between two numbers taken from user
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int first_number, second_number, Index, test;
/* ********************** Sub-Program Decelerations Section Start ******* */
int check_prime(int prime);
/* ********************** Sub-Program Decelerations Section End ******* */

/* ********************** Global Variables  Section End   ************* */
int main()
{
    //[1] We take range of numbers from user
    printf("Enter two numbers(intervals): ");
    scanf("%i%i", &first_number, &second_number);

    //[2] we print result
    printf("Prime number between %i and %i are: ",first_number,second_number);

    //[3] check every number in range if prime or not by for loop
    for (Index = first_number + 1; Index < second_number; Index++)
    {
        test = check_prime(Index);
        if (test == 1)
        {
            printf("%i\n", Index);
        }
    }
}

// [-] Function to check the number if prime or not
int check_prime(int number)
{
    int start, prime_flag = 0;

    for (start = 2; start < number; start++)
    {
        if ((number % start) == 0)
        {
            prime_flag = 0;
            break;
        }
        else
        {
            prime_flag = 1;
        }
    }
    return prime_flag;
}