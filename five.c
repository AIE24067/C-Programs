#include <stdio.h>

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is even.\n", a);
    } else if (a % 2 != 0) {
        printf("%d is odd.\n", a);
    } else {
        printf("Something went wrong.\n");
    }

    return 0;
}