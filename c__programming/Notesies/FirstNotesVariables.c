// EP 6TH Variables Practice
#include <stdio.h> 

int main(void){
    int num = 4;
    float pi = 3.14; //constants can't be changed
    char grade; //WILL ONLY HOLD 1 CHARACTER
    char name[20]= "LaRose"; 
    printf("%d", num);
    return 0;

    printf("What is your letter grade?\n");
    scanf("%c", &grade);

    printf("tell me a number: ");
    scanf("%d", &num);
    //this imput lets me get a space
    printf("Tell me your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d\n", num);
    printf("%s has a %c in the class!\n", name, grade);    
}
// STATIC -> DATA TYPES
// HALF AS MUCH SPACE
// PYTHON HAS DYNAMIC


//What is the main difference between declaring variables in Python and C?
//You have to tell the code what information you are putting in.

//In C, what is the purpose of specifying a data type when declaring a variable?
//

//List three common data types used in C and their corresponding format specifiers for printf().

//How do you declare and initialize an integer variable named "age" with the value 25 in C?

//What is the difference between printf() and scanf() functions in C?


//How do you add comments in C?
// By putting // for comments

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?

//In C, what is the significance of the main() function?


//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?

//What is the purpose of the & symbol when using scanf() to get user input?

//How do you declare a constant in C? Provide an example.