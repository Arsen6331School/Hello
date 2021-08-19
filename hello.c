#include <stdio.h>

int main() {
    char input[50];
    printf("What is your name? ");
    scanf("%s", input);
    printf("Hello, %s\n", input);
}