#include <stdio.h>

int main()
{
    printf("Numbers!");
    printf("\n");

    int n1;
    int n2;

    printf("Type a number: \n");
    scanf("%d", &n1);

    printf("Type a second number: \n");
    scanf("%d", &n2);

    printf(".\n");

    printf("%d + %d = ", n1, n2);
    printf("%d", n1 + n2);
    printf(".\n");

    printf("%d - %d = ", n1, n2);
    printf("%d", n1 - n2);
    printf(".\n");

    printf("%d * %d = ", n1, n2);
    printf("%d", n1 * n2);
    printf(".\n");

    printf("%d / %d = ", n1, n2);
    printf("%d", n1 / n2);

    return 0;
}