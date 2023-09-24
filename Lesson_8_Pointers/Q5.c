/******************************************************************************
 * Unit 2    : Lesson_8_Pointers >> Assignment 6
 * File Name : Q5.c
 * Data      : 11/9/2023
 * Author    : Omar Abdelrahman Elshahat
 * brief     : Write a program in C to show a pointer to an array which contents are pointer to structure
 *****************************************************************************/

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Global Section Start   ************* */
struct omar
{
    char* employee_name;
    int employee_id;
};

/* ********************** Global Section End   ************* */
int main()
{
    struct omar employee_one = {"Samy",1001};
    struct omar employee_two = {"Alex",1002};
    struct omar employee_three = {"Ahmed",1003};
    struct omar *ptrEmployees[] =  {&employee_one, &employee_two, &employee_three};
    struct omar* (*PptrEmployees)[3] = &ptrEmployees; 
    printf("Employee Name :%s\n", (*(*PptrEmployees + 1))->employee_name );
    printf("Employee ID :%i\n", (*(*PptrEmployees + 1))->employee_id );
    

    return 0;
}
