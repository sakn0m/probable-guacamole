
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &a, &b, &c);
    if (b - a == c - b) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri non sono in progressione aritmetica.\n");
    }
    return 0;
}
