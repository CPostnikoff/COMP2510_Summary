//
// Created by Cameron on 10/21/2023.
//
// LECTURE 04 IS ALL ABOUT PRACTICE AND FILE IO

// Working with files requires the stdio header.
#include<stdio.h>

int main() {

    // To start working with files, we need a pointer of type FILE
    FILE *filePointer;

    /*
     We open our file using fopen()
     fopen() needs a filename parameter, and a mode parameter
     both parameters are strings but the mode has many options
     r - read
     w - write, create a new empty file, if the file already exists, it erases the content
     a - append, allows us to append data to the end of a file, creates the file if it doesn't exist
     r+ - open a file for reading and writing
     w+ - create a NEW empty file for reading and writing
     a+ - opens an existing file for reading and appending
    */
    filePointer = fopen("filename.extension", "w+");

    /*
     We can write to the file using fprintf()
     fprintf(filePointer, "%formatspecifier", what you want to write to the file)
     fprintf requires all 3 parameter, you can use any combination of format specifiers you want
    */
    fprintf(filePointer, "%s", "put this string in the file");
    fprintf(filePointer,"%s%d%s", "There are:", 3, " monkeys jumping on the bed.");

    /*
     We can get character's from a file using fgetc()
     fgetc(filePointer)
     This will get the next character in the file, and increment the file pointer by 1.
    */
    char nextCharacter = fgetc(filePointer);

    /*
     We can read token by token, using fscanf and format specifiers!
     fscanf(filePointer, "%formatspecifiers", variableToStoreIn)
     This will get the next character in the file, and increment the file pointer by 1.
     fscanf stops at whitespace, \n, and EOF
    */
    char *myWordFromFile[20];
    int myNumberFromFile;
    fscanf(filePointer, "%s %d", myWordFromFile, myNumberFromFile);

    /*
      We can read line by line, using fgets()
      fgets(variableToStoreIn, numberOfCharactersToRead, filePointer)
      fgets() stops in the following cases:
        Reading the provided number of character
        Reaching a new line character
        Reaching EOF
     */
    char myLineFromFile[100];
    fgets(myLineFromFile, 100, filePointer);

    return 0;
}


