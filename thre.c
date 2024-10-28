#include <stdio.h>  

// Function to find the largest number  
int findLargest(int num1, int num2, int num3) {  
    int largest = num1; // Assume num1 is the largest  

    if (num2 > largest) {  
        largest = num2; // num2 is larger  
    }  
    if (num3 > largest) {  
        largest = num3; // num3 is larger  
    }  

    return largest; // Return the largest number  
}  

int main() {  
    int num1, num2, num3;  

    // Input three numbers from the user  
    printf("Enter three numbers: ");  
    scanf("%d %d %d", &num1, &num2, &num3);  

    // Call the function and display the result  
    int largest = findLargest(num1, num2, num3);  
    printf("The largest number is: %d\n", largest);  

    return 0;  
}