/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex5
 * Data      : 16/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Check if the input is an alphabet or not  
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
char ch;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    //ask user to type the input
    printf("Enter a character:");    
    scanf("%c",&ch);
    if ( (ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z') ) /* condition */
    {
    /*If statement code */
        printf("%c is an alphabet", ch);
    }
    else
    {
    /*If statement code */
        printf("%c is not an alphabet", ch);
    }
}