/******************************************************************************
 * Unit 2     : Lesson3_C Basics >> Assignment1
 * File Name : ex6
 * Data      : 7/9/2023
 * Author    : Omar Abd-Elrahman Elshahat
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,temp;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a: %f\n",a);
	printf("After swapping, value of b: %f",b);
    return 0;
}
