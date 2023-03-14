#include <stdio.h>

int main()
{
    int anno;
    printf("Quest'anno è bisestile? Scopriamolo insieme, per soli 4,99€! Inserisci l'anno:  ");
    scanf("%d", &anno);
    if ((anno%4 == 0 && anno%100 != 0) || anno%400 == 0)
    {
        printf("Quest'anno è bisestile! Compplimenti, non potevi tirare fuori la calcolatrice!!\n");
    }
   
    else
    {
        printf("Quest'anno non è bisestile. Potevi anche guardare da solo eh\n");
    }
}

//o per 4 ma non per 100, oppure per 400