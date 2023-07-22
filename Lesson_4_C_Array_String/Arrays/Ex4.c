/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Arrays
 * File Name : Ex4
 * Data      : 21/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Insert an Element in an Array
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int Array[30], Element, Number, Index, location;
/* ********************** Global Variables  Section End   ************* */
int main()
{   
    //[1] we take number of elements from user 
    printf("Enter number of elements:");
    scanf("%i", &Number);

    //[2] we take the numbers that user insert 
    for (Index = 0; Number >Index; Index++)
    {
        printf("Enter Number (%i) you want: ", Index+1);
        scanf("%d", &Array[Index]);
    }

    //[3] we take the number that user want to insert between numbers choosen by him 
    printf("Enter Element to be inserted: ");
    scanf("%i",&Element);

    //[4] we take the location he wanna insert in 
    printf("Enter the location: ");
    scanf("%i",&location);

    //[5] we make space for the new number 
    for (Index = Number;  Index>= location; Index--)
    {
        Array[Index] = Array[Index-1];
    }
    //[6] we put in specified place 
    Array[location -1] = Element;

    //[7] Printing result ... 
    for (Index = 0; Index < (Number + 1); Index++)
    {
        printf("|%i|  ",Array[Index]);
    }
    
    
}