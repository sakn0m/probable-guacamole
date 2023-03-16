#include <stdio.h>

int main() 
{
    char parola[100];
    int lunghezza = 0;
    int indice = 0;

    printf("Inserisci una parola: ");
    scanf("%s", parola);
    printf("\n");

    // calcoliamo la lunghezza della stringa manualmente
    while (parola[lunghezza] != '\0') 
    {
        lunghezza++;
    }

    printf("La parola al contrario è: ");
    // stampiamo i caratteri al contrario usando un loop while
    while (indice < lunghezza) 
    {
        printf("%c", parola[lunghezza - indice - 1]);
        indice++;
    }

    printf("\n");

    return 0;
}
