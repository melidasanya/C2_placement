//Input & Output - ASCII Values - I
//Write a program to get a character as an input and print its ASCII value.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input_char;

    // Reading the character as input
    scanf("%c", &input_char);

    // Printing the ASCII value of the character
    printf("%d\n", (int)input_char);

    return 0;
}


