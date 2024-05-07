#include <stdio.h>

//OPERAZIONI TRA VARIABILI

int main()
{

int a = 5;
int b = 2;
float c = 2.123456;
float d = 2.098765;
double e = 2.123456789012345;
double f = 2.098765432109876;

    printf("Somme\n");
    printf("a+10 = %d\n", a + 10); //somma
    printf("a+b = %d\n", a+b); //somma tra variabili

    printf("Sottrazioni\n");
    printf("a-10 = %d\n", a-10); //differenza
    printf("c-d = %lf\n", c-d); //differenza tra variabili

    printf("Moltiplicazioni\n");
    printf("a*10 = %d\n", a*10); //moltiplicazione
    printf("a*f = %lf\n", a*f); //moltiplicazioni tra variabili

    printf("Divisioni\n");
    printf("a/10 = %d\n", a/10); //divisione
    printf("e/f = %lf\n", e/f); //divisione tra variabili

}