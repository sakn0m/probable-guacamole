#include <stdio.h>

int main() {
    int i = 2;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        i += 2;
    }
    printf("La somma dei numeri pari compresi tra 2 e 100 è: %d\n", sum);
    return 0;
}
