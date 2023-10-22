//
// Created by Cameron on 10/21/2023.
//
// LECTURE 01 IS ALL ABOUT THE BASICS

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// this is a macro which is type of constant with GLOBAL scope
#define MY_CONSTANT_INT 5

// If a function body is defined BELOW main()
// We must include a reference to it using its function header ABOVE main()
// otherwise we cannot use it.
int numberOfDaysInMonth(int monthNumber);

int main() {

    int aNewInteger = 1250;
    // this is a constant variable, which is affected by scope
    const int A_SECOND_INTEGER = 1520;

    // what does this print?
    printf("%d\n", aNewInteger);


    // STRINGS
    char arrayStyle[] = "String declared as an array, and is mutable!";
    char arrayStyle2[] = {'h', 'i'};
    char *pointerStyle = "This string is a pointer, and is immutable";

    // STRING tools from #include<string.h>

    // BOOLEAN
    // required #include<stdbool.h>
    bool myTrue = true;
    bool myFalse = false;
    printf("What is this from? %d \n", myTrue);
    printf("What is THIS one from? %d\n", myFalse);

    printf("Number of days in March = %d\n", numberOfDaysInMonth(3));

    return 0;
}


int numberOfDaysInMonth(int monthNumber) {
    int days;
    switch(monthNumber){
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 2:
            days = 28;
            break;
        // switch cases must include a default case
        default:
            days = 0;
            // all switch statement cases must end in a break!
            break;
    }
    return days;
}