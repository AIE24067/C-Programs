write a C program to check weather a number is negative,positive or zero.

#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: \n");
    scanf("%d", &a);

    if (a> 0) {
        printf("%d is a positive number\n", a);
    }
    else if (a < 0) {
        printf("%d is a negative number\n", a);
    }
    else {
        printf("The number is zero\n");
    }

    return 0;
}