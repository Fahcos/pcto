#include <stdio.h>
int main()
{
    char nome[5]={'S', 'a', 'r', 'a', '\0'};//per scrivere si usano le stringhe e si mette un numero in + delle lettere per via del carattere terminatore'\0' che conclude la stringa
    int i=0;
    while (nome[i]!='\0')
    {
        printf("%c", nome[i]);//come stampare una stringa
        i=i+1;
    }
    printf("\n");
    printf("%s\n", nome);//stampare una stringa in maniera semplificata
    char nome2[]="Ciao come stai";//si pèuo' fare così perché mette in automatico i caratteri e il carattere terminatore 
    printf("%s\n", nome2);
    char nomeutente[50];
    scanf("%s", nomeutente);//la & con le stringhe non va, come far scegliere il nome all'utente la & va usata se vuoi modificare un carattere scanf("%c", &nomeutente[5]);
    scanf(" %[^\n]s", nomeutente);
    printf("nome utente:%s\n", nomeutente);
}