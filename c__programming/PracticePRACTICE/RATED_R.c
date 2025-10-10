//EP 6th Old Enough Practice

#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("What is your age?");
    scanf("%d", &age);

    if (age>= 18){
        printf("You can vote!\n");
    }else if (age == 16){ 
        printf("You can get a lisence!!\n");
    }else if (age == 15){ 
        printf("You can get a permit!\n");
    }else if (age >= 6){
        printf(" you can go to school! :(\n");
    }else {
        printf(" GET OFF OF THE COMPUTER BILLY! :(\n");
    }

    return 0;


}