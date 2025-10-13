//EP 6th Arrays Practice

#include <stdio.h>

int main(void){

    char fam[5][20] = {"Papa", "Mum", "Mckenna", "Adilyn"};

    for(int i=0; i<4; i++){
        printf("HEY %s YOU'RE AWESOME\n", fam[i]);
    }
}