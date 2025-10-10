// EP 6th Strings Practice
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100];
    char left[] = "<3<3<3<3<3<3<3"; 
    char right[] = "E>E>E>E>E>E>E>"; 
    char decorum[300];

    printf("Tell me your name: ");
    scanf("%s", name);
    
    strcpy(decorum, left);
    strcat(decorum, name);
    strcat(decorum, right);

    printf("%s\n", decorum)
    return 0;
}
