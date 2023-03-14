#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("inserisci tre numeri per sapere se possono corrispondere ai lati di un triangolo: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x+y>z)&&(z+y>x)&&(z+x>y))
    {
        printf("questi dati possono corrisponderei ai dati di un triangolo!\n");
    }
    else
    {
        printf("questi dati NON possono corrispondere ai lati di un triangolo!\n");
    }
}