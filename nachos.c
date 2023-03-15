#include <stdio.h>

int main() {
    int num, i = 2;
    printf("Inserisci un numero: ");
    scanf("%d", &num);

    while (i <= num / 2) {
        if (num % i == 0) {
            printf("%d non è un numero primo.\n", num);
            return 0;
        }
        i++;
    }
    printf("%d è un numero primo.\n", num);
    return 0;
}
