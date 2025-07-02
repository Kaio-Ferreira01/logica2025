#include <stdio.h>

int valido(int matriz[9][9]) {
    int i, j, k, l;
    int contador[10];

    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) contador[k] = 0;
        for (j = 0; j < 9; j++) contador[matriz[i][j]]++;
        for (k = 1; k <= 9; k++) if (contador[k] != 1) return 0;
    }

    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) contador[k] = 0;
        for (i = 0; i < 9; i++) contador[matriz[i][j]]++;
        for (k = 1; k <= 9; k++) if (contador[k] != 1) return 0;
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (k = 1; k <= 9; k++) contador[k] = 0;
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    contador[matriz[i + x][j + y]]++;
                }
            }
            for (k = 1; k <= 9; k++) if (contador[k] != 1) return 0;
        }
    }

    return 1;
}

int main() {
    int n, instancia = 1;
    scanf("%d", &n);

    while (n--) {
        int matriz[9][9];
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &matriz[i][j]);

        printf("Instancia %d\n", instancia++);
        if (valido(matriz))
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}
