#include <stdio.h>

int main()
{
    char gender;

    printf("inserisci il tuo sesso: M (maschio) F (femmina) N (neutro) ");
    scanf(" %c", &gender);

    if (gender == 'M')
    {
        printf("daje! sei un maschio!\n");
    }
    else if (gender == 'F')
    {
        printf("daje! sei una femmina!\n");
    }
    else if (gender == 'N')
    {
        printf("daje!!! you're valid!\n");
    }
    else
    {
        printf("errore! genere sconosciuto inserito!\n");
    }
}