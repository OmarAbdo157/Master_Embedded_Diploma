/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Strings
 * File Name : Ex3
 * Data      : 22/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Revers String Without Library Function
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <STRING.H>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
// Global Arrays
char strings[] = " ";
// Global Integers
int Index, length = 0;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    // [1] We take string from user
    printf("Enter the string : ");
    gets(strings);
    /*
     * Or we can use this to get input but with no spaces
     * scanf("%s",strings);
     */

    // [2] To know string length
    for (Index = 0; strings[Index] != '\0'; Index++)
    {
        length++;
    }

    // [3] To reverse the string print the reversed string
    for (Index = length; Index >= 0; Index--)
    {
        printf("%c", strings[Index]);
    }
}