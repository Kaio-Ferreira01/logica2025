#include <stdio.h>
#include <string.h>

int main() {
   
    int N;
    char valor[105]; 
    int leds_por_digito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", valor);
        int total_leds = 0;

        for (int j = 0; valor[j] != '\0'; j++) {
            int digito = valor[j] - '0';
            total_leds += leds_por_digito[digito];
        }

        printf("%d leds\n", total_leds);
    }

    return 0;
}
