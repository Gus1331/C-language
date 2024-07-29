#include <stdio.h>

int main(){
    int favoriteNumber;
    int i;

    printf("What is your favorite Number?\n");
    scanf("%d", &favoriteNumber);

    printf("How many times do you want to see it? \n");
    scanf("%d", &i);

    while( i > 0 ){
        printf("%d \n", favoriteNumber);
        i--;
    }

    printf("The end.");

    return 0;
}