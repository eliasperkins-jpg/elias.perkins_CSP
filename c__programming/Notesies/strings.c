// EP 6th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[] = "Xavier";
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



//What is the difference between a string and a character?
    //
//What types of quotation marks do we need for a string?
    //
//What library do we need to include to access the string functions in C?
    //<string.h>
//List functions the library allows us to use.
    //
//How do we concatenate strings in C?
    //
//How do we get individual characters from a string in C?
    //