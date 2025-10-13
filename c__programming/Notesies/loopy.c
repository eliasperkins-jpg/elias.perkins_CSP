//EP 6th Loops and arrays notes

#include <stdio.h>
#include <string.h>

int main(void){

    int nums[] ={4,265,676,3,5,68};
    char candy[5][20] = {"Skiddles", "Reeses", "Twix", "KitKat"};

    for(int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }

    for(int i=0; i<5; i++){
        printf("%s is my favorite candy!\n", candy[i]);
    }

//What is a loop? 
//Code running again and again
//What are the two types of loops?
//while
//What is iteration

//What are arrays? 
//lists
//How do you make lists in C? 
//int main(void){

  //  int nums[] ={4,265,676,3,5,68};

    //for(int x = 0; x < 11; x++){
    //    printf("%d\n", nums[x]);
    //}


//How do you make for loops in C? 

//int nums[] ={4,265,676,3,5,68};

//How do you make while loops in C?
//make them true

    return 0;

    int goose = 6;
    int count = 0;
    while(count < goose){
        printf("Duck\n");
        count++;

    }
    printf("goose");
}