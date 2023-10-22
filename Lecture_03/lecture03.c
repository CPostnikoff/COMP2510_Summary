//
// Created by Cameron on 10/21/2023.
//
// LECTURE 3 IS ALL ABOUT STRINGS, IO, AND ARRAY DETAILS

#include<stdio.h>
#include<string.h>

#define MAX_NAME_LENGTH 20

void playingWithPointerStrings(char *stringPointer);
int getStringLength(const char *string);
void scanfTesting();
void scanfWithNumbers();
void fgetsTesting();

int main() {

    // There are a few ways to declare strings in C
    char *pointerString = "A string declared using a pointer, this type of string is immutable";
    char arrayString[] = "A string declared as an array! This string is mutable";

    printf("%s\n%s\n", pointerString, arrayString);

    printf("\n");

    char *smallPointerString = "Hello!";
    playingWithPointerStrings(smallPointerString);

    printf("\n");

    // to copy strings we can use string.h!
    char original[] = "Testing Copy!";
    char copy[20];
    strcpy(copy, original);
    printf("So far so good!\n Original = %s, Copy=%s\n", original, copy);
    original[0]='N';
    printf("Yay!\n Original = %s, Copy=%s\n", original, copy);

    printf("\n");

    // similarly, we can use string.h to compare strings!
    char firstString [10];
    char secondString[10];
    strcpy(firstString, "Hi");
    strcpy(secondString, "Hi");
    if (firstString == secondString) {
        // You may see a warning in your IDE that the if condition is always false.
        // Because it is always false. == is comparing the address' of our strings!
        printf("== worked!\n");
    } else {
        printf("== did not work :(\n");
    }
    if (strcmp(firstString, secondString) == 0) {
        printf("strcmp worked!\n");
    } else {
        printf("strcmp did not work :(\n");
    }

    printf("\n");

    // we can also concatenate strings using the string.h
    char firstStringToConcat[10] = "good";
    char *secondStringToConcat = "book";
    char thirdStringToConcat[10];
    // copy the first 3 characters from secondStringToConcat into thirdStringToConcat
    strncpy(thirdStringToConcat, secondStringToConcat, 3);
    puts(thirdStringToConcat);
    // concatenate firstStringToConcat with the first two characters of secondStringToConcat
    puts(strncat(firstStringToConcat, secondStringToConcat, 2));

    scanfTesting();

    scanfWithNumbers();

    fgetsTesting();

    return 0;
}

void playingWithPointerStrings(char *stringPointer) {
    // we can move our pointer when using these kinds of strings!
    while (*stringPointer) {
        printf("%c\n", *stringPointer);
        stringPointer++;
    }
}

int getStringLength(const char *string) {
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void scanfTesting(){
    char firstName[20];
    printf("Please enter your first name: ");
    // scanf() reads characters from standard input, and will try to match user input to the formatted string
    scanf("%s", firstName);
    printf("Hello %s\n", firstName);

    char lastName[20];
    printf("Please enter your first and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("Hello %s %s\n", firstName, lastName);
}

void scanfWithNumbers() {
    char firstName[20];
    int age;
    printf("Please enter your first and age: ");
    scanf("%s %d", firstName, &age);
    printf("Hello %s. You are: %d\n", firstName, age);
}

void fgetsTesting() {
    // If you want to read a whole line, rather than by tokens, use fgets()
    char name[MAX_NAME_LENGTH];
    printf("Please enter your full name: ");
    fgets(name, MAX_NAME_LENGTH, stdin);
    printf("Your name is: %s\n", name);
}