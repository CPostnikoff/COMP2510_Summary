//
// Created by Cameron on 10/21/2023.
//
// SOLUTIONS TO PROBLEMS AND EXERCISES MAY NOT BE OPTIMAL
// ALL SOLUTIONS WERE FIRST-ATTEMPT SOLUTIONS MADE DURING/BETWEEN LECTURES


#include<stdio.h>
#include<stdbool.h>

void scanSplitDisplay();
void displayRequestedElement(int *elementArray, int desiredElement);
void reverseElements(int *userArray, int arrayLength);
void removeDuplicates(int *array, int arraySize);
void findSecondLargestElement(char const *elementArray);
void countVowels(const char *givenString);

int main() {
    scanSplitDisplay();

    return 0;
}

// Ask a user for their full name, read it, split into first and last name, display a message greeting them.
void scanSplitDisplay() {
    char usersName[50];
    printf("Please enter your first and last name:");
    // scan
    fgets(usersName, 50, stdin);

    // create variables for the split names
    char firstName[50];
    char *firstNamePointer = firstName;
    char lastName[50];
    char *lastNamePointer = lastName;

    bool writingFirst = true;

    // split the name!
    char *usersNamePointer = usersName;
    while (*usersNamePointer != '\0' && *usersNamePointer!= '\n') {
        if (*usersNamePointer == ' ') {
            writingFirst = false;
        }
        else if (writingFirst) {
            *firstNamePointer = *usersNamePointer;
            firstNamePointer++;
        } else {
            *lastNamePointer = *usersNamePointer;
            lastNamePointer++;
        }
        usersNamePointer++;
    }

    // greet the user
    printf("Greetings %s %s!", firstName, lastName);
}

// Search for a specific element and display it if found.
void displayRequestedElement(int *elementArray, int desiredElement) {
    int foundIndex;
    for (int i = 0; elementArray[i] != '\0'; i++) {
        if (elementArray[i] == desiredElement) {
            foundIndex = i;
        }
    }
    if (foundIndex) {
        printf("element found at index %d\n", foundIndex);
    } else {
        printf("element not found in array\n");
    }
}

// Reverse the order of elements in an array
void reverseElements(int *userArray, int arrayLength) {
    for (int i = 0; i < arrayLength/2; i++) {
        if (i != arrayLength/2) {
            int front = userArray[i];
            int back = userArray[arrayLength - i - 1];
            userArray[i] = back;
            userArray[arrayLength - i - 1] = front;
        }
    }
    for (int j = 0; j < arrayLength; j++){
        printf("%d", userArray[j]);
    }
}

// Remove duplicate elements from an array, preserving order of the original array.
// This solution is far from elegant, but was fun exercise for using null characters and prettying-up prints.
void removeDuplicatesInArray(char *elementArray) {
    // this first set will replace all duplicate elements with a blank space in the provided array of characters.
    for (int i = 0; elementArray[i] != '\0'; i++) {
        char currentCharacter = elementArray[i];
        for (int j = i + 1; elementArray[j] != '\0'; j++) {
            if (elementArray[j] == currentCharacter) {
                elementArray[j] = ' ';
            }
        }
    }
    printf("%s\n", elementArray);

    // This second part creates a new string, without the whitespace so the printed result looks prettier.
    // In practice functions should never do more than 1 thing, however this is just an exercise.
    char testArray[20];
    int insertCount = 0;
    for (int z = 0; elementArray[z] != '\0'; z++) {
        if (elementArray[z] != ' ') {
            char temp = elementArray[z];
            testArray[insertCount] = temp;
            insertCount++;
        }
    }

    testArray[insertCount] = '\0';

    printf("%s\n", testArray);
}

// find and display the second-largest element in an array.
void findSecondLargestElement(char const *elementArray) {
    // I decided to use a string here for fun
    // an easier but similar problem would be to find the second largest in an array of integers
    int largestValue;
    int largestIndex;

    int secondLargest;
    int secondLargestIndex;

    for (int i = 0; elementArray[i] != '\0'; i++) {
        if (elementArray[i] > largestValue) {
            largestValue = elementArray[i];
            largestIndex = i;
        } else {
            if (elementArray[i] > secondLargest) {
                secondLargest = elementArray[i];
                secondLargestIndex = i;
            }
        }
    }
    printf("The second largest value is %c.\n", elementArray[secondLargestIndex]);
}

// count the number of vowels in a given string.
void countVowels(const char *givenString) {
    // this can be made MUCH prettier with a switch statement!
    int counter = 0;
    for (int i = 0; givenString[i] != '\0'; i++) {
        if (givenString[i] == 'a' || givenString[i] == 'e' || givenString[i] == 'o' || givenString[i] == 'i' || givenString[i] == 'u') {
            counter++;
        }
    }
    printf("There are %d vowels in the provided string\n", counter);
}