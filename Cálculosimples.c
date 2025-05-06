#include <stdio.h>
#include <math.h>
int main() {
    float cod1, num1, valor1;
    float cod2, num2, valor2;
    float total;

    scanf("%f %f %f", &cod1, &num1, &valor1);
    scanf("%f %f %f", &cod2, &num2, &valor2);

    total = (num1 * valor1) + (num2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
