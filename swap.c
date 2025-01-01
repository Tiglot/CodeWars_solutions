#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;

    printf("insert int a: ");
    scanf("%d", &a);
    printf("insert int b: ");
    scanf("%d", &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    //swap
    a = a + b; // a = 12
    b = a - b; // b = 5
    a = a - b; // a = 7


    printf("after swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return EXIT_SUCCESS;
}
