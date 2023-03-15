#include <stdio.h>

int main() {
    int i = 2;
    int partial_sum = 0;
    while (i <= 100) {
        partial_sum += i;
        printf("Somma parziale: %d\n", partial_sum);
        i += 2;
    }
    printf("La somma finale dei numeri pari compresi tra 2 e 100 è: %d\n", partial_sum);
    return 0;
}
