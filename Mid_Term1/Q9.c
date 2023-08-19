/******************************************************************************
 * Mid-Term  : Write C program >> Question 9
 * File Name : Q9.c
 * Data      : 19/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : c function to reverse words in string
 *****************************************************************************/
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ********************** Includes Section End   ********************** */
/* ********************** Functions Declaration Section Start ************* */
void ReverseWord(char StringToReverse[]);
/* ********************** Functions Declaration Section End ************* */
/* ********************** Arrays Section Start ******* */
char string[100];
/* ********************** Arrays Section End ******* */
/* ********************** Global Variables Section Start ******* */
/* ********************** Global Variables Section End ******* */
int main()
{
	printf("Enter name : ");
	gets(string);
	ReverseWord(string);
}
/* ********************** Functions Definition Section Start ************* */
void ReverseWord(char StringToReverse[])
{
	int length, index1, index2, StartIndex, EndIndex;
	length = strlen(StringToReverse);
	EndIndex = length - 1;
	for (index1 = length - 1; index1 >= 0; index1--)
	{
		if (StringToReverse[index1] == ' ' || index1 == 0)
		{
			if (index1 == 0)
			{
				StartIndex = 0;
			}
			else
			{
				StartIndex = index1 + 1;
			}
			for (index2 = StartIndex; index2 <= EndIndex; index2++)
			{
				printf("%c", StringToReverse[index2]);
			}
			EndIndex = index1 - 1;
			printf(" ");
		}
	}
}
/* ********************** Functions Definition Section End ************* */
