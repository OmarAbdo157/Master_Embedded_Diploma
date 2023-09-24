/******************************************************************************
 * Unit 2    : Lesson_8_Pointers >> Assignment 6
 * File Name : Q3.c
 * Data      : 11/9/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Write a program in C to print a string in reverse using a pointer
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INDEX 10
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start   ************* */
char string[INDEX];
char *ptrString;
int Index;
/* ********************** Global Variables Section End   ************* */
int main()
{
    printf(" Input a string : ");
    gets(string);
    int length = strlen(string);
    
    for (ptrString = string + length -1 ; ptrString >= string; ptrString--)
    {
        printf("%c",*ptrString);
    }
    
    return 0;
}
