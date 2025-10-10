// EP 6th Conditionals Notes

#include <stdio.h>
#include <string.h>
/*
<
>
<=
>=
==
!=
LOGICAL OPERATORS
&& = and
|| = or
! = not
*/
int main(void){
    char name[100];
    int grade;
    printf("What is your grade percentage?");
    scanf("%d", & grade);
    printf("What is your name?");
    scanf("%s", &name);

    printf("%d\n", strcmp(name, "Ms. Larose"));
    if(strcmp(name, "Ms. LaRose") == 0){
        printf("You have a 98!!\n");
    }else if(grade>= 90){ 
        printf("You have a A!!\n");
    }else if(grade>= 80){ 
        printf("You have a B!!\n");
    }else{
        printf(" you don't have an A :(\n");
    }

    return 0;

    //What puts something inside of the “if” statement?
    //How are conditions written in C?
    //How do we write elif conditions in C?
    //else if
    //When do else conditions run?
    //when all other conditions are false
    //What are the 3 logical operators in C?
    // if, else if. else


}