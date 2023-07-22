/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Arrays
 * File Name : Ex1
 * Data      : 21/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Multidimensional of [2*2] Array Sum
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int column,row;
float first_matrix[2][2];
float second_matrix[2][2];

/* ********************** Global Variables  Section End   ************* */
int main()
{   
    printf("Enter the elements of 1st matrix:\n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
    //we take the first matrix elements from user
            printf("Enter a%i%i: ",row + 1,column + 1);
            scanf("%f",&first_matrix[row][column]);
        }
        
    }
    printf("Enter the elements of 2st matrix:\n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
    //we take the second matrix elements from user
            printf("Enter a%i%i: ",row + 1,column + 1);
            scanf("%f",&second_matrix[row][column]);
        }
        
    }
    printf("Sum Of Matrix:\n");
    for (row = 0; row < 2; row++)
    {
    //We Sum Every Element Of 1ST Matrix + 2ND Matrix
        for (column = 0; column < 2; column++)
        {
            printf("%.1f\t",first_matrix[row][column]+second_matrix[row][column]);
            
        }
        printf("\n");
    }
    
}