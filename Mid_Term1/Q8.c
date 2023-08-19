/******************************************************************************
 * Mid-Term  : Write C program >> Question 8
 * File Name : Q8.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to take an array and revers its elements
 *****************************************************************************/
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */
/* ********************** Functions Declaration Section Start ************* */
int reverse(int arr[], int size);
/* ********************** Functions Declaration Section End ************* */
/* ********************** Arrays Section Start ******* */
int InputNumbers[100];
/* ********************** Arrays Section End ******* */
/* ********************** Global Variables Section Start ******* */
int size, Index;
/* ********************** Global Variables Section End ******* */
int main()
{
    // [1] We take size of array
    printf("Enter size of array: ");
    scanf("%i", &size);

    // [2] Then We take every element
    for (Index = 0; Index < size; Index++)
    {
        printf("Enter element number %i : ", Index + 1);
        scanf("%i", &InputNumbers[Index]);
    }
    // [3] Then we print array before reverse to compare
    printf("\nArray before reverse :\n");
    for (Index = 0; Index < size; Index++)
    {
        printf("%i  ", InputNumbers[Index]);
    }
    // [4] Then we pass the array to our function
    reverse(InputNumbers, size);

    // [5] Then we print array after reverse to compare
    printf("\nArray after reverse :\n");
    for (Index = 0; Index < size; Index++)
    {
        printf("%i  ", InputNumbers[Index]);
    }
}
/* ********************** Functions Definition Section Start ************* */
int reverse(int arr[], int size)
{
    int Index, Index2, save;
    for (Index = 0, Index2 = size; Index < Index2 / 2; Index++)
    {
        save = arr[Index];
        arr[Index] = arr[Index2 - Index - 1];
        arr[Index2 - Index - 1] = save;
    }
}
/* ********************** Functions Definition Section End ************* */
