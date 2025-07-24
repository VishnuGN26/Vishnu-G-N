#include <stdio.h>
#include <string.h>

struct Calculator {
    double a;
    double b;
    char operation[10];
};

double calculate(struct Calculator calc) {
    if (strcmp(calc.operation, "add") == 0) {
        return calc.a + calc.b;
    } else if (strcmp(calc.operation, "subtract") == 0) {
        return calc.a - calc.b;
    } else if (strcmp(calc.operation, "multiply") == 0) {
        return calc.a * calc.b;
    } else if (strcmp(calc.operation, "divide") == 0) {
        if (calc.b != 0)
            return calc.a / calc.b;
        else {
            printf("Error: Division by zero.\n");
            return 0;
        }
    } else {
        printf("Error: Invalid operation.\n");
        return 0;
    }
}

int main() {
    struct Calculator calc;

    printf("Enter first number (a): ");
    scanf("%lf", &calc.a);

    printf("Enter second number (b): ");
    scanf("%lf", &calc.b);

    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", calc.operation);

    double result = calculate(calc);
    printf("Result: %.2lf\n", result);

    return 0;
}
