/******************************************************************************
 * Unit 2     : Lesson3_C Basics >> Assignment2
 * File Name : Ex1
 * Data      : 7/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter an integer you want to check :");
    scanf("%i", &num);
    if (num % 2 == 1)
    {
        printf("%i is odd", num);
    }
    else
    {
        printf("%i is even", num);
    }
    return 0;
}