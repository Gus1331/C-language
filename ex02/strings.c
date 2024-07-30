#include <stdio.h>
#include <string.h>

int main(){
    printf("Type Hello_World \n");
    char input[11] = "";

    scanf("%s", input);
    int inputLenght = strlen(input);

    printf("%s\n", input);
    printf("string lenght: %d\n", inputLenght);

    if(strcmp(input, "Hello_World") == 0){
        printf(":)");
    }
    return 0;
}