
// EP 6th Expressions Notes
#include <stdio.h>
#include <math.h>

int base_income;
int groceries;
int rent;
int travel_expense;
int utilities;
int carry;

int add(int spending, int base_income){

    int percentage = (spending / base_income) * 100;

    return percentage;

    printf("You should be saving about %f\n", savings);
    printf("Your overall expense should be %f\n which is %d\n", combined, percentage);
    printf("You can spend %f\n", spending);
    
    return 0;
}
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
    float combined = twt + taxes;
    float savings = 0.1 * base_income;
    float spending = base_income - combined + savings;


    add("");
    return 0;
}
