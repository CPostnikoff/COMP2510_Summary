//
// Created by Cameron on 10/21/2023.
//
// SOLUTIONS TO PROBLEMS AND EXERCISES MAY NOT BE OPTIMAL
// ALL SOLUTIONS WERE FIRST-ATTEMPT SOLUTIONS MADE DURING/BETWEEN LECTURES

#include<stdio.h>

int main() {

    return 0;
}

// Write a function to count the number of words in a string.
int countWords(char sentence[]){
    int transitionCount = 0;
    char previous = ' ';

    while (*sentence != '\0'){
        char current = *sentence;
        if (current == ' ' && previous != ' '){
            transitionCount++;
        }
        previous = *sentence;
        sentence++;
    }

    if (*sentence == '\0' && previous != ' '){
        transitionCount ++;
    }

    return transitionCount;
}

// Write a function that takes a number from a user and stores it in a file test.txt


// Prompt the user for a file name, count the number of LINES in the text file using fgetc()



