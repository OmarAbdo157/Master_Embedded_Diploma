/******************************************************************************
 * Unit 2    : Lesson6_Functions >> Assignment 5
 * File Name : Ex3.c
 * Data      : 21/8/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : C program to add two Complex numbers using structure (and pass it to function)
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Structure Declaration Section Start ************** */
struct SComplex
{
    float m_Real;
    float m_Imaginary;
};
/* ********************** Structure Declaration Section End   ************* */

/* ********************** Function Declaration Section Start ************** */
struct SComplex SumTwoComplex(struct SComplex FirstNumber, struct SComplex SecondNumber);
/* ********************** Function Declaration Section End   ************* */
int main()
{
    /* ********************** Local Variables Section Start   ************* */
    struct SComplex number1, number2;
    /* ********************** Local Variables Section End   ************* */

    printf("For 1st complex number \n");
    printf("\nEnter real and imaginary respectively: ");
    scanf("%f %f",&number1.m_Real,&number1.m_Imaginary);
    printf("\nFor 2nd complex number \n");
    printf("\nEnter real and imaginary respectively: ");
    scanf("%f %f",&number2.m_Real,&number2.m_Imaginary);

    struct SComplex Sum = SumTwoComplex(number1, number2);
    printf("Sum = %0.1f + %0.1fi",Sum.m_Real,Sum.m_Imaginary);
    return 0;
}

/* ********************** Function Definition Section Start ************** */
struct SComplex SumTwoComplex(struct SComplex FirstNumber, struct SComplex SecondNumber)
{
    struct SComplex sum;
    sum.m_Real = FirstNumber.m_Real + SecondNumber.m_Real;
    sum.m_Imaginary = FirstNumber.m_Imaginary + SecondNumber.m_Imaginary;
    return sum;
}
/* ********************** Function Definition Section End   ************* */