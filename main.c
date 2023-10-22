#include<stdio.h>
#include<string.h>

int main() {

    char firstName[20];
    char lastName[20];

    printf("please enter your first name: ");

    char *myName = "cameroncameroncameroncameroncameron";

    scanf("%s", firstName);
    printf("firstName %s\n", firstName);

    for (int i = 0; myName[i] != '\0'; i++) {
        firstName[i] = myName[i];
    }

    for (int i = 0; firstName[i] != '\0'; i++) {
        printf("%c", firstName[i]);
    }

    return 0;
}
