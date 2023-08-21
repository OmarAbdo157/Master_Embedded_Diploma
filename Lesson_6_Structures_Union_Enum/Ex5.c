/******************************************************************************
 * Unit 2    : Lesson6_Structures_Union_Enum >> Assignment 5
 * File Name : Ex5.c
 * Data      : 21/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : C program to find area of a circle, passing arguments to macros
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#define Pi 3.145
#define area(r) (Pi*(r)*(r))
/* ********************** Includes Section End   ********************** */
int main()
{
    /* ********************** Local Variables Section Start ************** */
    int Radius;
    float Area;
    /* ********************** Local Variables Section End   ************* */
    printf("Enter The Radius: ");
    scanf("%i", &Radius);
    Area = area(Radius);
    printf("Area = %0.2f", Area);
    return 0;
}
