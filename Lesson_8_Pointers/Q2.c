/******************************************************************************
 * Unit 2    : Lesson_8_Pointers >> Assignment 6
 * File Name : Q2.c
 * Data      : 11/9/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Write a program in C to print all the alphabets using pointer.
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start   ************* */
char Alphabets[27];
char *ptr;
int Index;
/* ********************** Global Variables Section End   ************* */
int main()
{
    ptr = Alphabets;
    for (Index = 0; Index < 26; Index++)
    {
        *ptr = Index + 'A';
        ptr ++ ;
    }
    
    ptr = Alphabets;
    for (Index = 0; Index < 26; Index++)
    {
        printf("%c  ", *ptr);
        ptr ++ ;
    }
    
    return 0;
}

