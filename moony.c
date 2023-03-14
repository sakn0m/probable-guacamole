int main() 
{
    int anno;
    
    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &anno);
    
    if (anno == 1969) 
    {
        printf("Sei nato l'anno in cui l'uomo è andato sulla Luna!\n");
    } 
    else if (anno < 1969) 
    {
        printf("Sei nato %d anni prima che l'uomo andasse sulla Luna.\n", 1969 - anno);
    } 
    else 
    {
        printf("Sei nato %d anni dopo che l'uomo è andato sulla Luna.\n", anno - 1969);
    }
    return 0;
}

