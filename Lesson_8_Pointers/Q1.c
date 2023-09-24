/******************************************************************************
 * Unit 2    : Lesson_8_Pointers >> Assignment 6
 * File Name : Q1.c
 * Data      : 11/9/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Write a program in C to demonstrate how to handle the pointers in the program. 
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Variables Section Start   ************* */
int m = 29;
/* ********************** Global Variables Section End   ************* */
int main()
{
    printf("address of m :%p\n", &m);
    printf("value of m :%i\n\n\n", m);
    
    int* ab = &m;
    printf("Now ab is assigned with the address of m \n");
    printf("Address of pointer ab: %p \n",ab);
    printf("Content of pointer ab: %i \n\n\n",*ab);
    m = 34;
    printf("The value of m assigned to 34 now\n");
    printf("Address of pointer ab: %p \n",ab);
    printf("Content of pointer ab: %i \n\n\n",*ab);
    
    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now\n");
    printf("Address of m: %p \n",&m);
    printf("Value of m: %i \n",m);
    
    return 0;
}

