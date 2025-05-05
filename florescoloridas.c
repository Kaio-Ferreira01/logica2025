#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main() {
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double p = (a + b + c) / 2.0;
        double area_triangulo = sqrt(p * (p - a) * (p - b) * (p - c));

        double r = area_triangulo / p; 
        double area_roses = PI * r * r;

        double R = (a * b * c) / (4.0 * area_triangulo);  
        double area_sunflowers = PI * R * R - area_triangulo;

        double area_violets = area_triangulo - area_roses;

        printf("%.4f %.4f %.4f\n", area_sunflowers, area_violets, area_roses);
    }

    return 0;
}
