#include <stdio.h>
#include <string.h>

typedef struct {
    int tempo;
    int penalidade;
    int resolvido;
} Problema;

int main() {
    int N;

    while (scanf("%d", &N), N != 0) {
        Problema problemas[26];
        for (int i = 0; i < 26; i++) {
            problemas[i].tempo = 0;
            problemas[i].penalidade = 0;
            problemas[i].resolvido = 0;
        }

        char id;
        int tempo;
        char resultado[10];

        for (int i = 0; i < N; i++) {
            scanf(" %c %d %s", &id, &tempo, resultado);
            int idx = id - 'A';

            if (strcmp(resultado, "correct") == 0 && !problemas[idx].resolvido) {
                problemas[idx].resolvido = 1;
                problemas[idx].tempo = tempo;
            } else if (strcmp(resultado, "incorrect") == 0 && !problemas[idx].resolvido) {
                problemas[idx].penalidade += 20;
            }
        }

        int total_problemas = 0;
        int total_tempo = 0;

        for (int i = 0; i < 26; i++) {
            if (problemas[i].resolvido) {
                total_problemas++;
                total_tempo += problemas[i].tempo + problemas[i].penalidade;
            }
        }

        printf("%d %d\n", total_problemas, total_tempo);
    }

    return 0;
}