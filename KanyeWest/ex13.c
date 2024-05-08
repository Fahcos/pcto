#include<stdio.h>
#include<unistd.h>
int main()
{
    int numeri[5]={7,14,44,99,-31};//array, con una variabile ho salvato 5 numeri invece di mettere 5 variabili
    printf("%d\n", numeri[2]);//stampare uno dei valori dell'array, si scrive 2 perché parte da 0, quindi 7 è posizione 0 ecc.
    int i=0;
    while(i<5)
    {
        printf("%d\n", numeri[i]);//come stampare tutti i numeri
        i=i+1;
    }
    int num2[100];
    int b=0;
    while(b<100)
    {
        printf("Inserisci un numero\n");
        scanf("%d", &num2[b]);//permette di far inserire all'utente 100 numeri
        b=b+1;
    }
}