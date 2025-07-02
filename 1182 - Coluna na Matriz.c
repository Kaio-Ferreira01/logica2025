#include <stdio.h>

int main() {
    int linha;
    char operacao;
    double matriz[12][12];
    double resultado = 0.0;


    scanf("%d", &linha);
    scanf(" %c", &operacao);  

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }


    for (int j = 0; j < 12; j++) {
        resultado += matriz[j][linha];
    }


    if (operacao == 'M') {
        resultado /= 12.0;
    }


    printf("%.1lf\n", resultado);

    return 0;
}