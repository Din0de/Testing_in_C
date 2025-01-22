#include <stdio.h>
#include <math.h>

int main(){

double a;
double b;
double c;

printf("What is side A?: ");
scanf("%lf", &a);

printf("What is side B?: ");
scanf("%lf", &b);

c = sqrt(pow(a,2) + pow(b,2));

printf("Your hypotenuse is %.2lf.", c);

}
