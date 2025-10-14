//EP 6th Loops and arrays notes

#include <stdio.h>

int main(void){

    return 0;

    int i = 1;

    while(i < 51){
        i++;
        if(1 % 15){
            
            printf("Fizzbuzz\n");
            
        }else if(i % 5){
            
            printf("buzz\n");
            
        }else if(i % 3){
            
            printf("fizz\n");
            
        }else{
            
            printf("%d\n", i);
        } 
    }


    return 0;
}
