/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Strings
 * File Name : Ex2
 * Data      : 22/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Know String Length By Arrays
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
// Global Arrays
char strings[] = " ";
// Global Integers
int Index, length = 0;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    //[1] We take the input from user
    printf("Enter a string : ");
    scanf("%s", strings);
    // We can use || gets(strings); || to take string with spaces

    //[2] We add 1 to length if its not 0 or '\0'
    for (Index = 0; strings[Index] != '\0'; Index++)
    {
        length++;
    }

    //[3] We print the value
    printf("Length of string: %i", length);
}