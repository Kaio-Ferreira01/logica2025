#include <stdio.h>

int main() {

    int n;
    float a, b, c;
    float m;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &a, &b, &c);
        m = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n", m);
    }
    return 0;
}G