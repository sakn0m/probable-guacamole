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
        if ((x==y && x!=z)||(y==z && y!=x)||(z==x && z!=y))
        {
            printf("il tuo è un triangolo isoscele\n");
        }
        else if (x==y && x==z && z==y )
        {
        printf("il tuo triangolo è equilatero!\n");
        }
        else
        {
            printf("il tuo è un triangolo scaleno!");
        }
    }
    else
    {
        printf("questi dati NON possono corrispondere ai lati di un triangolo!\n");
    }
}