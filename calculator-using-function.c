#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Invalid input\n");
    }
    return a / b;
}

int calculate(int a, int b, char operation);

int main() {
    int a , b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    int result = calculate(a, b, op);
    printf("%d\n", result);
}

int calculate(int a, int b, char operation) {
    switch (operation) {
        case '+' :
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            printf("Invalid input\n");
    }
    return 0;
}