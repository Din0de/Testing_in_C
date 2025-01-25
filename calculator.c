#include <stdio.h> 
#include <ctype.h>
#include <math.h>

int main () {
    
    char operator;
    printf("Do you want to do addition (A), subtraction (S), multiplication (M), or division (D)?\n");
    printf("Type the corresponding character associated with each arithmetic operation: ");
    scanf("%c", &operator);

    operator = toupper(operator);

    double num1;
    double num2;

    switch (operator) {
        case 'A':
            printf("What do you want the first value to be?: ");
            scanf("%lf", &num1);
            printf("What do you want the second value to be?: ");
            scanf("%lf", &num2);
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case 'S':
            printf("What do you want the first value to be?: ");
            scanf("%lf", &num1);
            printf("What do you want the second value to be?: ");
            scanf("%lf", &num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case 'M':
            printf("What do you want the first value to be?: ");
            scanf("%lf", &num1);
            printf("What do you want the second value to be?: ");
            scanf("%lf", &num2);
            printf("%.2lf x %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case 'D':
            printf("What do you want the first value to be?: ");
            scanf("%lf", &num1);
            printf("What do you want the second value to be?: ");
            scanf("%lf", &num2);
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Not a valid arithmetic operator.");
    }

    return 0;
}
