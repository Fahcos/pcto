#include <stdio.h>

int main()
{
    int a;
    printf("Inserisci la tua età:\n");
    scanf("%d", &a);

    if (a>18)
    {
        printf("Sei maggiorenne\n");
    }
    else if(a==18)
    {
        printf("Sei maggiorenne\n");
    }
    else 
    {
        printf("Sei minorenne\n");
    }
    
    
}