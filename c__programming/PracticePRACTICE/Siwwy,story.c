// EP 6th Strings Practice
#include <stdio.h>
#include <string.h>

int main(void){

    char varia[100];
    char vari[100]; 
    char variab[100]; 

    printf("Tell me something you can ride: ");
    scanf("%s", varia);
    printf("Tell me something you can taste: ");
    scanf("%s", vari);
    printf("Tell me something you hate: ");
    scanf("%s", variab);
    

    printf("You were on a %s\n and you catch the smell of, %s\n, so you get off and try and look for it but all you found %s\n.", varia, vari, variab);
    return 0;
}
