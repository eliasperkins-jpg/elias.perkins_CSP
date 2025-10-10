//EP 6th Time Practice

#include <stdio.h>
#include <string.h>

int main(void){
    int times;
    printf("What time is it? 1 - 24");
    scanf("%d", &times);

    if (times>= 18){
        printf("It's Evening!\n");
    }else if (times>= 13){ 
        printf("It's Afternoon!\n");
    }else if (times>= 10){ 
        printf("It's noon!\n");
    }else
        printf("Good MORNING!\n");

    return 0;


}