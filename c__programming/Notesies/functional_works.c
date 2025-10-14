//EP 6th Functions Notes

#include <stdio.h>
    
void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to %s\n", name);
    printf("Happy Birthday to you\n");
    printf("%s is now %d\n", name, age);
}
int add(int num_one, int num_two){

    return num_one + num_two;
}

char* get_name(void){
    char *name;
    printf("What is your name?: ");
    scanf("%s", name);
    return name;
}

int main(void){
    birthday("Eleanor", 15);
    birthday("Furina", 501);
    birthday("Gambling", 125043);
    add(5,4);


    return 0;
}













/*What a function is
a short command that is able to be used again
Why we use functions
to avoid wasting time
How to write a function in C
void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to %s\n", name);
    printf("Happy Birthday to you\n");
    printf("%s is now %d\n", name, age);
What are arguments and parameters?

How do arguments and parameters work together?

How to use parameters and arguments in C

What are return statements?

How do return statements change how you define a function in C?

What do return statements do with the information?

*/