#include <stdio.h>
#include <string.h>

struct Account{
    int id;
    char name[50];
    int age;
    float height;
};

int main(){
    struct Account p1;
    p1.id = 10001;
    strcpy(p1.name, "Gus Souza");
    p1.age = 21;
    p1.height = 1.75;

    struct Account p2 = {10002, "Gus", 21, 1.755};


    printf("Id: %d\n", p1.id);
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2fm\n", p1.height);

    return 0;
}
