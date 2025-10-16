
// EP 6th Expressions Notes#include <stdio.h>
#include <math.h>

int base_income;
int groceries;
int rent;
int travel_expense;
int utilities;
int carry;

float add(float spending, float base_income){
    float percentage = (spending / base_income) * 100;
    return percentage;
}
    
int main(){
    printf("What is your base income? $");
    scanf("%d", &base_income);
    printf("What is your rent? $");
    scanf("%d", &rent);
    printf("How much do your groceries cost? $");
    scanf("%d", &groceries);
    printf("What are your travel expenses? $");
    scanf("%d", &travel_expense);
    printf("What are your monthly utilities' cost? $");
    scanf("%d", &utilities);
    
    int twt = groceries + rent + travel_expense + utilities;
    float taxes = 0.14 * twt;
    float combined = twt + taxes;
    float savings = 0.1 * base_income;
    float spending = base_income - (combined + savings);
    
    // Calculate percentages using the add() function
    float percent_rent = add(rent, base_income);
    float percent_utilities = add(utilities, base_income);
    float percent_groceries = add(groceries, base_income);
    float percent_travel = add(travel_expense, base_income);
    float percent_savings = add(savings, base_income);
    
    printf("\n=== Budget Breakdown ===\n");
    printf("Your rent is $%d, and it is %.2f%% of your income\n", rent, percent_rent);
    printf("Your utilities are $%d, and they are %.2f%% of your income\n", utilities, percent_utilities);
    printf("Your groceries are $%d, and they are %.2f%% of your income\n", groceries, percent_groceries);
    printf("Your travel expenses are $%d, and they are %.2f%% of your income\n", travel_expense, percent_travel);
    printf("Your savings are $%.2f, and they are %.2f%% of your income\n", savings, percent_savings);
    printf("\nYou have $%.2f money to spend this month\n", spending);
    
    return 0;
}
