/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Strings
 * File Name : Ex1
 * Data      : 22/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Find The Frequency of Characters in a String
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
// Global Arrays
char str_arr[200];
// Integers
int Index, string_length, times_repeated;
// Characters
char freq_char;
/* ********************** Global Variables  Section End   ************* */
int main()
{
    //[1] We take the string from user
    printf("Enter a string: ");
    gets(str_arr);
    
    //[2] We calculate string length
    string_length = strlen(str_arr);
        
    //[3] We take the character he wanna know frequency for
    printf("Enter a character to find frequency: ");
    scanf("%c", &freq_char);
    
    //[4] We calc times character repeated by For loop and If statement
    for (Index = 0; Index < string_length; Index++)
    {
        if (freq_char == str_arr[Index])
        {
            times_repeated++;
        }
    }
        
    //[5] We print frequency
    printf("Frequency of %c : %i", freq_char, times_repeated);
}