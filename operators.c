#include <stdio.h>

int main() {
    
    int num1 = 25;
    int num2 = 7;

    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    
    int result1 = (num1 > num2) && (num1 % 2 == 1);
    int result2 = (num2 < 10) || (num1 % 2 == 0);
    
    // Print logical operation results
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    
    return 0;
}