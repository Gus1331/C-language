#include <string.h>
#include <stdbool.h>
#include <stdio.h>

char* hello();
char* espace(bool conditional);
char* world();

int main(){
    char helloWorld[12];
    strcpy(helloWorld, hello());
    strcat(helloWorld, espace(true));
    strcat(helloWorld, world());
    printf("%s", helloWorld);
    return 0;
}

char* hello(){
    return "Hello";
}

char* espace(bool conditional){
    if(conditional){
    return " ";
    } else{
        return 0;
    }
}

char* world(){
    return "World!";
}