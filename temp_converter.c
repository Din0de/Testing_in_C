#include <stdio.h>
#include <ctype.h>

int main () {
    
    char unit;

    printf("Do you want the temperature in Fahrenheit or Celsius? Type \"F\" or \"C\": ");
    scanf("%c", &unit);

    unit = toupper(unit);
    
    double temperature;

    if (unit == 'C') {
        printf("What is the temperature in Celsius?: \n");
        scanf("%lf", &temperature);
    } else {
        printf("What is the temperature in Fahrenheit?: \n");
        scanf("%lf", &temperature);
    }

    if (unit == 'C') {
        temperature = (temperature * 9/5) + 32;
        printf("The temperature in Fahrenheit is %.2lf", temperature);
    } else {
        temperature = (temperature - 32) * 5/9;
        printf("The temperature in Celsius is %.2lf", temperature);
    }

    return 0;
}