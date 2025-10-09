// EP 6th Strings Practice
#include <stdio.h>
#include <string.h>

int main(void){

    char name[439875498766];
    char last_name[25]; 
    char full_name[1000]; 

    name[2] = 'j';

    printf("Please tell me your last name: \n");
    scanf("%s", last_name);

    strcat(full_name, " ");
    printf("[%s]", full_name);
    strcat(full_name, last_name);
    printf("[%s]", full_name);

    strcmp(last_name, "Barson");

    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));

    return 0;
}