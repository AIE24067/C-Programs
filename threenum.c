#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a;  

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int num1, num2, num3;

    // Taking user input for the three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Call the function to find the maximum
    int max = findMax(num1, num2, num3);
    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}