/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Arrays
 * File Name : Ex5
 * Data      : 22/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Search an element in Array 
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int elements_number,Index,to_be_searched;
// Global Arrays
int Arr[100];
/* ********************** Global Variables  Section End   ************* */
int main()
{   
    //[1] We take the number of total elements from user 
    printf("Enter number of elements : ");
    scanf("%i",&elements_number);

    //[2] Then we take every number user need to add to program 
    for (Index = 0; elements_number > Index; Index++)
    {
        scanf("%i",&Arr[Index]);
    }

    //[3] Then we ask him to type the element he wanna search  
    printf("Enter the element to be searched : ");
    scanf("%i",&to_be_searched);

    //[4] We print the number location
    for (Index = 0; elements_number > Index; Index++)
    {
        if (Arr[Index] == to_be_searched )
        {
            printf("Number found at the location = %i", Index + 1);
        }
    }
    
}