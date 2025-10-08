// EP 6th Expressions Notes
#include <stdio.h>
#include <math.h>

int base_income;
int groceries;
int rent;
int travel_expense;
int utilities;



float gpa = 3.5;
int seven = 7;
int year = 2025;
int age = 15;

int main(){
    printf("What is your base income?");
    scanf("%d", &base_income);
    scanf("%d", &rent);
    scanf("%d", &groceries);
    scanf("%d", &travel_expense);
    scanf("%d", &utilities);

    float taxes = (14.5 * rent) ;
    
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

