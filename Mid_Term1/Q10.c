/******************************************************************************
 * Mid-Term  : Write C program >> Question 10
 * File Name : Q10.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to count the max number of ones between two zeros
 *****************************************************************************/
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
/* ********************** Includes Section End   ********************** */
/* ********************** Functions Declaration Section Start ************* */
int countOnes(int n);
/* ********************** Functions Declaration Section End ************* */
/* ********************** Global Variables Section Start ******* */
int input;
/* ********************** Global Variables Section End ******* */
int main()
{
	// We take the number from user
	printf("Enter number to check: ");
	scanf("%i",&input);
	printf("Max number of ones between 2 zeros at number %i is %i", input, countOnes(input));
	return 0;
}
/* ********************** Functions Definition Section Start ************* */
int countOnes(int n)
{
	// local variables in function scope 
	int maxCount = 0, count = 0, foundZero = 0,  Index;
	// local arrays declaration in function scope 
	int save[100];
	// We make for loop to get input (n) in binary and save its binary to (save) array
	for (Index = 0; Index < 16; Index++)
	{
		if ((n % 2) == 1)
		{
			save[Index] = n % 2;
			n = (n - 1) / 2;
		}
		else if ((n % 2) == 0)
		{
			save[Index] = n % 2;
			n = n / 2;
		}
	}
	// Then we get max ones number between two zeroes from binary 
	for (Index = 0; Index < 16; Index++)
	{
		if (save[Index] == 0)
		{
			foundZero = 1;
			count = 0;
		}
		else if (foundZero)
		{
			count++;
			if (count > maxCount)
			{
				maxCount = count;
			}
		}
	}
	//Finally we return our result 
	return maxCount;
}
/* ********************** Functions Definition Section End ************* */
