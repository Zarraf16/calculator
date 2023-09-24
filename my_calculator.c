#include <stdio.h>

double calculate(double a, double b, char operator) {
    switch (operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default: printf("Invalid operator!\n"); return 0;
    }
}

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    double result = calculate(num1, num2, operator);
    printf("Result: %.2lf\n", result);

    return 0;
}
