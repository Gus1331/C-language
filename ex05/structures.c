#include <stdio.h>

struct Model{
    char name[20];
};

struct Car{
    int id;
    char name[20];
    char color[10];
    struct Model model;
};


int main(){
    struct Car c1 = {
        100,
        "Car Name",
        "Car Color",
        {
            "Car Model"
        }
    };

    printf("Name: %s\nId: %d\nColor: %s\nModel:{\n   Name: %s\n}", c1.name, c1.id, c1.color, c1.model.name);
    return 0;
}