/******************************************************************************
 * Unit 2    : Lesson3_C Basics >> Assignment2
 * File Name : Ex2
 * Data      :15/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Check Vowel Or Consonant By If Statement
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int vowel;
int main()
{
    char vowel;
    printf("Enter an alphabet :");
    scanf("%c", &vowel);
    if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'O' || vowel == 'o' || vowel == 'I' || vowel == 'i' || vowel == 'u' || vowel == 'U')
    {
        printf("%c is vowel", vowel);
    }
    else
    {
        printf("Its Consonant");
    }
}