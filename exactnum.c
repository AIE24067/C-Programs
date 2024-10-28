#include <stdio.h>

// Function to calculate the absolute value of a number
int absoluteValue(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    int num;

    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calling the absoluteValue function
    int absValue = absoluteValue(num);
    printf("The absolute value of %d is: %d\n", num, absValue);

    return 0;
}