//EP 6th Functions Notes

#include <stdio.h>
    
    char name[52];

void goodmorn(char* name){
    printf("Good morning %s\n", name);
}
char* get_name(void){
    char *name;
    printf("What is your name?: ");
    scanf("%s", name);
    return name;
}

int main(void){
    goodmorn("Larry");
    goodmorn("Karry");
    goodmorn("Terry");
    goodmorn("Mary");
    goodmorn("Barry");


    return 0;
}