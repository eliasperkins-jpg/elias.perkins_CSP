// EP 6th Expressions Notes
#include <stdio.h>
#include <math.h>

char name[] = "Elias";
char eyes[] = "Hazel";
char breakthoufast[] = "None At All";
char color[] = "Somewhere between green and blue";
char ucas[] = "UCAS";
char math[] = "Math";

float gpa = 3.5;
int seven = 7;
int year = 2025;
int age = 15;

int main(){
    printf("My name is %s \n", name);
    printf("My age is %d \n", age);
    printf("My eye color is is %s \n", eyes);
    printf("My school is %s \n", ucas);
    printf("My favorite subject is %s \n", math);
    printf("My favorite color is %s \n", color);
    printf("My breakfast today was %s \n", breakthoufast );
    printf("My GPA could be %.1f \n", gpa);
    printf("The number is %d \n", seven);
    printf("The year is %d \n", year);
    return 0;
}

