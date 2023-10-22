//
// Created by Cameron on 10/21/2023.
//
// LECTURE 2 IS ALL ABOUT POINTERS

#include<stdio.h>

void goodSwap(int *firstNumber, int *secondNumber);
void makeAllElementsZero(int elements[], int size);
void functionWithArrayParameter(int elements[], int size);
void functionWithArrayPointerParameter(int *elements, int size);

int main() {
    int swapMeOne = 5;
    int swapMeTwo = 1;

    // we pass the address of our variables to our function.
    // our function then uses pointers to swap the values stored in those addresses.
    printf("firstNumber: %d, secondNumber: %d\n", swapMeOne, swapMeTwo);
    goodSwap(&swapMeOne, &swapMeTwo);
    printf("firstNumber: %d, secondNumber: %d\n", swapMeOne, swapMeTwo);

    int myNumber = 1;
    int *pointerToMyNumber = &myNumber;
    printf("The value of myNumber: %d, myNumber's address %p\n", myNumber, &myNumber);
    printf("pointerToMyNumber's value: %p, pointToMyNumber de-referenced:%d\n", pointerToMyNumber, *pointerToMyNumber);

    int testArray[] = {1, 2, 3};
    makeAllElementsZero(testArray, 3);
    printf("Array elements: %d %d %d\n", testArray[0], testArray[1], testArray[2]);


    int testArray2[] = {1, 2, 3, 4, 5};
    functionWithArrayParameter(testArray2, 5);
    functionWithArrayPointerParameter(testArray2, 5);

    return 0;
}

// C is pass by value, so the following function DOES NOT WORK
void badSwap(int firstNumber, int secondNumber) {
    int temporary = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporary;
    // once we leave the scope of this function, all of our work is meaningless.
}

// If we want two variables to swap their values, we can use pointers!
void goodSwap(int *firstNumber, int *secondNumber) {
    /*
        *firstNumber is called "pointer de-referencing" it essentially says:
        "What is the value stored where firstNumber is pointing?"
        We then store a copy of that value in a new variable, temporary.
    */
    int temporary = *firstNumber;

    /*
        We then use pointer de-referencing to look at what value is stored where secondNumber points.
        And use that value to overwrite the value stored where firstNumber points.
    */
    *firstNumber = *secondNumber;

    /*
        We then use pointer de-referencing one final time.
        We overwrite the value stores where secondNumber points, with a copy of the value stored in temporary.
    */
    *secondNumber = temporary;
}

void makeAllElementsZero(int elements[], int size) {
    /*
        This function works! and the values in the array are replaced with 0's
        This words because the value of an array type, decays to a value of a pointer type
        When we use an array as a parameter, we actually get a pointer to the first element in that array
    */
     for (int index = 0; index < size; index++) {
        elements[index] = 0;
    }
}


// the following two functions are functionally equivalent.
void functionWithArrayParameter(int elements[], int size) {
    for (int index = 0; index < size; index++) {
        printf("%d ", elements[index]);
    }
    printf("\n");
}

void functionWithArrayPointerParameter(int *elements, int size) {
    for (int index = 0; index < size; index++) {
        printf("%d ", elements[index]);
    }
    printf("\n");
}