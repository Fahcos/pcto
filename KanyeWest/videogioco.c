#include<unistd.h>
#include<stdio.h>
int main()
{
    char nome[50];
    int a, b;
    sleep(1);
    printf("Scegli il tuo personaggio:\n");
    sleep(1);
    printf("1 Ragazzo: ");
    printf("Descrizione\n");
    sleep(1);
    printf("2 Ragazza: ");
    printf("Descrizione\n");
    scanf("%d", &a);
    if ((a==1)||(a==2))
    {
        sleep(1);
        printf("Scegli un nome:\n");
        scanf("%s", nome);
        sleep(1);
        printf("Il tuo nome è: %s\n", nome);
        sleep(1);
        printf("Introduzione\n");
        sleep(1);
        printf("Scelta:\n");
        printf("1\n");
        printf("2\n");
        scanf("%d", &b);
        if (b==1)
        {
            printf("continuo\n");
        }
        else if (b==2)
        {
            printf("continuo");
        }
        else
        {
            sleep(1);
            printf("GAME OVER");
        }
    }
    else 
    { 
        sleep(1);
        printf("GAME OVER\n");
    }
}