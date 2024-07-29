#include <stdio.h>

int main (){
    for(int i = 0; i < 10; i++){
        if (i == 0){
            printf("Hello World \n");
        } else {
            printf("Hello World again %d\n", i + 1);
        }
    }
    return 0;
}