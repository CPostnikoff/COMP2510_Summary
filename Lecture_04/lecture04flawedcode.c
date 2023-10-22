//
// Created by Cameron on 10/21/2023.
//

#include<stdio.h>
#include <string.h>

// PROBLEM 1
// what's wrong with either of these two functions?

//char *findFirstBlankCharacter(char *inputString) {
//    while (*inputString != ' ') {
//        inputString++;
//    }
//    return inputString;
//}

//char *findFirstBlankCharacter(char *inputString) {
//    int index = 0;
//    while (*inputString != ' ') {
//        printf("At index: %d\n", index++);
//        inputString++;
//    }
//    return inputString;
//}

//int main() {
//    printf("%s\n", findFirstBlankCharacter("Hello World!"));
//    return 0;
//}



// PROBLEM 2
// what's wrong with this code?

//int main() {
//    char *name = "Alex Smith";
//    char firstName[10];
//    strncpy(firstName, name, 5);
//    printf("Copied: %s\n", firstName);
//    return 0;
//}


// PROBLEM 3
// what about this code?
//int* getIntegerArray(int size) {
//    int array[10];
//    for (int i = 0; i < size; i++) {
//        array[i] = i;
//    }
//    return array;
//}
//int main() {
//    int* returnedArray = getIntegerArray(5);
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", returnedArray[i]);
//    }
//    return 0;
//}
