#include <stdio.h>
#include <unistd.h>
int main()
{
    int a=0;
    while(a<=100)//ripete la funzione all'interno fino a che il contenuto delle parentesi diventa falso
    {
        printf("%d\n", a+1);
        a=a+1;//oppure a++ o a+=1
    }
    
}