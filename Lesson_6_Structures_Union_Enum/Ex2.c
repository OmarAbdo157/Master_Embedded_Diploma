/******************************************************************************
 * Unit 2    : Lesson6_Functions >> Assignment 5
 * File Name : Ex2.c
 * Data      : 21/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : C program to add two distances in inch-feet using structure
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Structure Declaration Section Start ************** */
struct SDistance
{
    float inch;
    int feet;
};
/* ********************** Structure Declaration Section End   ************* */

int main()
{
    struct SDistance data1, data2;
    
    // We take data to save in our struct
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%i", &data1.feet);
    printf("Enter inch: ");
    scanf("%f", &data1.inch);
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%i", &data2.feet);
    printf("Enter inch: ");
    scanf("%f", &data2.inch);

    // Then we sum it but if we have 12 inch we change it  to feet
    struct SDistance sum;
    sum.feet = data1.feet + data2.feet;
    sum.inch = data1.inch + data2.inch;
    if (sum.inch > 12)
    {
        sum.inch -= 12;
        sum.feet++;
    }

    // Then we print result
    printf("Sum of Distance = %i'- %0.1f",sum.feet,sum.inch);
    return 0;
}
