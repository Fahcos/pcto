#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Inserisci tre numeri\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Sì è un triangolo\n");
    }
    else 
    {
        printf("Non è un triangolo\n");
    }
    
}