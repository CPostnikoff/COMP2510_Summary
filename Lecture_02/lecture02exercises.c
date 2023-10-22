//
// Created by Cameron on 10/21/2023.
//
#include<stdio.h>

void exerciseOne();
void exerciseTwo(int * firstPointer, int * secondPointer);
void exerciseThree(int *number);
int exerciseFour();
int exerciseFive();
int exerciseSix(const int nums[], int size);

int main() {
    // all the answers can be found by running this file.
    // assess EVERY function before checking your answers.

    exerciseOne();

    int first = 1, second = 2;
    exerciseTwo(&first, &second);
    printf("First: %d, Second: %d\n", first, second);

    int myNumber = 1;
    exerciseThree(&myNumber);
    printf("My number after exercise 3: %d\n", myNumber);

    int returnValue = exerciseFour();
    printf("%d\n", returnValue);

    int returnValue2 = exerciseFive();
    printf("%d\n", returnValue2);

    int myNumbers[] = {1, 2, 3, 4, 5};
    int myNumbersSize = 5;
    int exerciseSixReturns = exerciseSix(myNumbers, myNumbersSize);
    printf("Exercise 6 returns: %d", exerciseSixReturns);

    return 0;
}

void exerciseOne() {
    // what is the value of *ptr1, *ptr2?
    int x = 5;
    int y = 10;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    printf("ptr1: %d, ptr2: %d\n", *ptr1, *ptr2);
}

void exerciseTwo(int * firstPointer, int * secondPointer) {
    int *temp = firstPointer;
    firstPointer = secondPointer;
    secondPointer = temp;
    *temp = 3;
}

void exerciseThree(int *number) {
    for (int i = 0; i <= 10; i++) {
        *number = (*number += 1);
    }
}

int exerciseFour() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr1 = numbers;
    int *ptr2 = &numbers[3];

    return *ptr2 - *ptr1;
}

int exerciseFive() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    return *(ptr + 3);
}

int exerciseSix(const int nums[], int size) {
    int mystery = 0;
    for (int i = 0; i < size; i++) {
        mystery += nums[i];
    }
    return mystery;
}