/******************************************************************************
 * Mid-Term    : Write C program >> Question 6
 * File Name : Q6.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to return unique number in array with one loop
 *****************************************************************************/
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */
/* ********************** Functions Declaration Section Start ************* */
int unique(int arr[], int size);
/* ********************** Functions Declaration Section End   ************* */
/* ********************** Arrays Section Start ******* */
int array[100];
/* ********************** Arrays Section End   ******* */
/* ********************** Global Variables Section Start ******* */
    int numOfInputs, i;
/* ********************** Global Variables Section End   ******* */
int main()
{
    //[1] We take number of inputs from user to know array size
    printf("Enter number of inputs: ");
    scanf("%d", &numOfInputs);

    //[2] Then We take array elements
    printf("Enter %d numbers: ", numOfInputs);
    for (i = 0; i < numOfInputs; i++)
    {
        scanf("%d", &array[i]);
    }

    //[3] Then we pass it to our function 
    printf("%i", unique(array, numOfInputs));
}
/* ********************** Functions Definition Section Start ************* */
int unique(int arr[], int size)
{
    int Index1, Index2, repeated;
    int UniqueNumber;

    //[4] Then inside our function we compare every element with every other element in the array
    for (Index1 = 0; Index1 < size; Index1++)
    {
        repeated = 0;
        for (Index2 = 0; Index2 < Index1; Index2++)
        {
        //[5] if any repeated element detected then repeat flag will be = 1  
            if (arr[Index1] == arr[Index2])
                repeated = 1;
        }
        //[6] if not then its not repeated and we return it  
        if (repeated == 0)
            UniqueNumber = arr[Index1];
    }
    return UniqueNumber;
}
/* ********************** Functions Definition Section End ************* */
