#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159;
    double r, A;

    scanf("%lf", &r);

    A = pi * r * r;

    printf("A=%.4lf\n", A);
    return 0;
}