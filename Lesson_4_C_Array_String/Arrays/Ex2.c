/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Arrays
 * File Name : Ex2
 * Data      : 21/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Calculate Average Between Some Numbers Using Arrays   
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
float average[] = {1}; // This 1 Will Be Replaced By User So its like initial value to make the matrix we want
int i, data_number;
float sum =0;
/* ********************** Global Variables  Section End   ************* */
int main()
{   
    //we take the number of values that he want to calculate average           
    printf("Enter the numbers of data :");
    scanf("%i",&data_number);
    //we use for loop to take every number user want   
    for (i = 0; i < data_number; i++)
    {
        printf("%i. Enter number:", i+1);
        scanf("%f",&average[i]);
        sum += average[i];
    }
    //then we calculate the average and print it  
    printf("Average= %0.2f",sum, (sum/data_number));
}