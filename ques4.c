//Input & Output - Student Details
//Write a program to print the details of a student. The student's details consist of his/her name, age, CGPA, and grade.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char name[100];
    int age;
    float cgpa;
    char grade;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &cgpa);
    scanf(" %c", &grade); 
    
    float truncated_cgpa = floor(cgpa * 100) / 100;

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", truncated_cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}


