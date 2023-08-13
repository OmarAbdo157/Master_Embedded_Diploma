/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex8
 * Data      : 16/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Simple Calculator Using Switch Case
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
char oper;
float num1, num2,sol ;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // take operator form user 
    printf("Enter operator either + or - or * or / :");
    scanf("%c", &oper);
    //take two operands 
    printf("Enter two operands:");
    scanf("%f%f",&num1,&num2);
    //solving using switch statement
    switch (oper)
    {
        // if he wanna to add
    case '+':
        sol = num1 + num2;
        printf("%0.2f %c %0.2f = %0.1f", num1, oper, num2, sol);
        break;
        // if he wanna to subtract
    case '-':
        sol = num1 - num2;
        printf("%0.2f %c %0.2f = %0.1f", num1, oper, num2, sol);
        break;
        //if he wanna to multiply
    case '*':
        sol = num1 * num2;
        printf("%0.2f %c %0.2f = %0.1f", num1, oper, num2, sol);
        break;
        //if he wanna to divide  
    case '/':
        sol = num1 / num2;
        printf("%0.2f %c %0.2f = %0.1f", num1, oper, num2, sol);
        break;
        //if he put wrong operator    
    default:
        printf("invalid operator");
        break;
    }
}