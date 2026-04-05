#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a, b, answer;
    char operator,*stopstring;
    char *error = NULL;

    if (argv[1] && argv[2] && argv[3]) {
        a = strtod(argv[1], &stopstring);
        operator = argv[2][0];
        b = strtod(argv[3], &stopstring);
    } else {
        printf("First Number: ");
        scanf("%lf", &a);

        printf("Operator: ");
        scanf(" %c", &operator);

        printf("Second Number: ");
        scanf("%lf", &b);

        printf("\n");
    }

    if (operator == '+') {
        answer = a + b;
    } else if (operator == '-') {
        answer = a - b;
    } else if (operator == '*' || operator == 'x') {
        answer = a * b;
    } else if (operator == '/') {
        answer = a / b;
    } else {
        error = "Unknown Operator. Use '+', '-', '*' (or 'x'), or '/'\n";
    }
    if (error) {
        printf(error);
    } else {
        printf("%lf %c %lf = %lf\n", a, operator, b, answer);
    }

    return 0;
}