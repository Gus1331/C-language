#include <stdio.h>

int main(){
    printf("Type Hello World \n");
    char input[] = "";

    scanf("%s", &input);

    printf("%s", input[0]);
    return 0;
}