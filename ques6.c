//Input & Output - ASCII Values - II
//Write a program to get a number (ASCII value) as input and print its equivalent character

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ascii_value;
    
    scanf("%d", &ascii_value);
    
    printf("%c\n", (char)ascii_value);
    
    return 0;
}

