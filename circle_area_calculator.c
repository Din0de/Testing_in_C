#include <stdio.h>
#include <math.h>

int main () {
    
    const double pi = 3.14;
    double radius;
    double circumference;

    printf("What is the radius of your circle?\n");
    scanf("%lf", &radius); // lf is the format specifier of doubles IMPORTANT!!!!
    
    double power = pow(radius, 2);
    double answer = power * pi;

    printf("The radius of the circle is %.2lf.", answer);

    return 0;
}
