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
        if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a))
        {
            printf("Triangolo isoscele\n");
        }
        else if (a==b && b==c)
        {
            printf("Triangolo equilatero\n");
        }
        else
        {
            printf("Triangolo scaleno\n");
        }
        
    }
    else 
    {
        printf("Non è un triangolo\n");
    }
    
}