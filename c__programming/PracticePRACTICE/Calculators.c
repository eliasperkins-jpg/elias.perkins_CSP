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
    printf("What is your rent?");
    scanf("%d", &rent);
    printf("How much do your groceries cost?");
    scanf("%d", &groceries);
    printf("What are your travel expenses?");
    scanf("%d", &travel_expense);
    printf("What are your monthly utilites' cost?");
    scanf("%d", &utilities);

    int twt = groceries + rent + travel_expense + utilities;
    float taxes = 0.14 * twt;
    savings = 0.1 * base_income

    printf("you should be saving about" %d \n savings)
    
    return 0;
}

