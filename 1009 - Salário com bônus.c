#include <stdio.h>

int main(){
    char nome[15];
    double salario, vendas, total;
    double comissao = 0.15;

    scanf("%s", nome);
    scanf("%lf %lf", &salario, &vendas);
    total = salario + (vendas * comissao);
    printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}