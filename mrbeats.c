#include <stdio.h>

int main()
{
    int age;

    printf("quanti anni hai? ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("daje! hai %d anni!\n", age);
    }
    else
    {
        printf("non sei maggiorenne ma comunque slay!\n");
    }
}