#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, answer;
    char operator;
    char *error = NULL;

    printf("First Number: ");
    scanf("%lf", &a);

    printf("Operator: ");
    scanf(" %c", &operator);

    printf("Second Number: ");
    scanf("%lf", &b);

    printf("\n");

    if (operator == '+') {
        answer = a + b;
    } else if (operator == '-') {
        answer = a - b;
    } else if (operator == '*') {
        answer = a * b;
    } else if (operator == '/') {
        answer = a / b;
    } else {
        error = "Unknown Operator. Use '+', '-', '*', or '/'\n";
    }
    if (error) {
        printf(error);
    } else {
        printf("%lf %c %lf = %lf\n", a, operator, b, answer);
    }

    return 0;
}