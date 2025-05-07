#include <stdio.h>

int main() {
    int N;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int qtd[7];

    scanf("%d", &N);

    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {
        qtd[i] = N / notas[i];
        N = N % notas[i];
        printf("%d nota(s) de R$ %d,00\n", qtd[i], notas[i]);
    }

    return 0;
}
