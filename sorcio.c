#include <stdio.h>

int main()
{
    int età;
    char sesso;

    printf("inserisci la tua età e il tuo sesso: ");
    scanf("%d %c", &età, &sesso);
    printf("la tu età è: %d\n il tuo sesso è: %c\n", età, sesso);
}