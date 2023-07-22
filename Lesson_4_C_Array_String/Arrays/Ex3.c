/******************************************************************************
 * Unit 2    : Lesson4_Array&&Strings >> Assignment3 >> Arrays
 * File Name : Ex3
 * Data      : 21/7/2023
 * Author    : Omar Abd-Elrahman Elshahat
 * brief     : Find Transpose of a Matrix   
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start ************** */
int number_of_rows,number_of_columns,row,column;
int main_array[10][10],trans_array[10][10];
/* ********************** Global Variables  Section End   ************* */
int main()
{   
    //First step we take number of rows and columns user want    
    printf("Enter rows and column of matrix :");
    scanf("%i%i",&number_of_rows,&number_of_columns);

    //Second step we take elements that user want to put 
    printf("Enter elements of matrix:\n");
    for (row = 0; row < number_of_rows; row++)
    {
        for (column = 0; column < number_of_columns; column++)
        {
            printf("Enter element a%i%i : ",row + 1 , column + 1);
            scanf("%i",&main_array[row][column]);
        }
        
    }

    //Third step we print matrix that user entered
    for (row = 0; row < number_of_rows; row++)
    {
        for (column = 0; column < number_of_columns; column++)
        {
            printf("%i\t",main_array[row][column]);
        }
        printf("\n");
    }

    //Fourth step we safe its values in another matrix so we can edit
    for (row = 0; row < number_of_rows; row++)
    {
        for (column = 0; column < number_of_columns; column++)
        {
            trans_array[column][row] = main_array[row][column];
        }
        
    }

    //Last step is to transpose it by changing places of rows and columns  
    for (row = 0; row < number_of_columns; row++)
    {
        for (column = 0; column < number_of_rows; column++)
        {
            printf("%i\t",trans_array[row][column]);
        }
        printf("\n");
    }
}