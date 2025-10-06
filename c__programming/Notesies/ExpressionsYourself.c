// EP 6th Expressions Notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025; //Whole numbers
    float pi = 3.14; //Decimals
    double long_pi = 3.141593658589; // Double long decimals


    printf("8/3 = %f\n", (float)8/3); //cast is specifically stating the data type
    printf("8/3 = %f\n", 8/3.0);
    printf("2 ^ 4 = %d\n", (int)pow(2, 4));
    
    printf("%f", 2.4 + 5);

    year += 1;
    year ++;

    return 0;


    //What is the difference between an integer and a float in C?
// float is decimal, int is whole
    //How does C handle integer division compared to float division?
//
    //List the arithmetic operators available in C and their functions.
//
    //What is the modulus operator, and how is it used?
//
    //How do you round a float to the nearest integer in C?
//printf("2 ^ 4 = %d\n", (int)pow(2, 4));
    //What is type casting in C? Provide an example of explicit type casting.
// printf("8/3 = %f\n", (float)8/3);
    //How do compound assignment operators work in C? List three examples.
//
    //What is the purpose of the math.h library? Name three functions it provides.
// rounding, calculating square roots, power of ____
    //How do you print a float with a specific number of decimal places using printf()?
//
    //What happens when you mix integer and float operations in C?
//It will always be a float
}