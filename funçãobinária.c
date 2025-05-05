#include <stdio.h>
#include <string.h>

int contar_bits_1(char *num) {
    int count = 0, len, i, d, r;
    char temp[1100];

    strcpy(temp, num);
    while (!(temp[0] == '0' && temp[1] == '\0')) {
        len = strlen(temp);
        r = 0;
        for (i = 0; i < len; i++) {
            d = (r * 10 + temp[i] - '0');
            temp[i] = d / 2 + '0';
            r = d % 2;
        }
        while (temp[0] == '0' && temp[1]) memmove(temp, temp + 1, strlen(temp));
        count += r;
    }
    return count;
}

int main() {
    int T;
    char num[1100];

    scanf("%d", &T);
    getchar(); // consome '\n'
    while (T--) {
        fgets(num, sizeof(num), stdin);
        num[strcspn(num, "\n")] = 0; // remove '\n'
        printf("%d\n", contar_bits_1(num));
    }
    return 0;
}
