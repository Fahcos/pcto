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

    printf("Somme");
    printf("a+10 = %d\n", a + 10); //somma
    printf("a+b = %lf\n", a+b); //somma tra variabili

    printf("Sottrazioni");
    printf("a-10 = %d\n", a-10); //differenza
    printf("a-b = %lf\n", a-b); //differenza tra variabili

    printf("Moltiplicazioni");
    printf("a*10 = %d\n", a*10); //moltiplicazione
    printf("a*b = %lf\n", a*b); //moltiplicazioni tra variabili

    printf("Divisioni");
    printf("a/10 = %d\n", a/10); //divisione
    printf("a/b = %lf\n", a/b); //divisione tra variabili

}