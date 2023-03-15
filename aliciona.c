#include <stdio.h>

int main() 
{
    int x;
    int y;
    x = 0;
    y = 0;

    while (x<=100)
    {   
        x=x+2;
        y=y+x;
    }
    printf("la somma è: %d\n", y);
  
}
