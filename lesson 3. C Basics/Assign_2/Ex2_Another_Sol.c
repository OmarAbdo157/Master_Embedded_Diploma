/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex2_Another_Sol
 * Data      : 16/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Check Vowel Or Consonant By Switch Statement
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char vowel;
    printf("Enter an alphabet :");
    scanf("%c", &vowel);
    switch (vowel)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'U':
    case 'u':
    case 'O':
    case 'o':

        printf("%c is vowel", vowel);
        break;

    default:
        printf("Its Consonant");
        break;
    }
}