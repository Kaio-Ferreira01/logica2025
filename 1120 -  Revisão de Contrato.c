#include <stdio.h>
#include <string.h>

int main() {
    char D, N[110];

    while (1) {
        scanf(" %c %s", &D, N);

        if (D == '0' && strcmp(N, "0") == 0)
            break;

        char resultado[110];
        int j = 0;

        for (int i = 0; N[i] != '\0'; i++) {
            if (N[i] != D) {
                resultado[j++] = N[i];
            }
        }

        resultado[j] = '\0';

        int k = 0;
        while (resultado[k] == '0') {
            k++;
        }

        if (resultado[k] == '\0') {
            printf("0\n");
        } else {
            printf("%s\n", &resultado[k]);
        }
    }

    return 0;
}
