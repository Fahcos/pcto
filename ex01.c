#include <stdio.h>

int main()
{
    //VARIABILI//
    int a; //numeri interi %d
    float b = 2.512345; //numeri con virgola massimo 6 cifre %f
    double c = 2.612345678901234; //numeri con virgola + precisi massimo 15 cifre %lf

    a = 65;
    printf("a: %d\n", a); //identificazione per int: %d
    printf("b: %f\n", b); 
    printf("c: %lf\n", c);
    printf("a: %c\n", a); //valori ascii
    printf("a: %d\na: %d\n", a, a); //per stampare 2 volte la stessa variabile la riscrivo(vale anche oer 2 variabili diverse)
    
}