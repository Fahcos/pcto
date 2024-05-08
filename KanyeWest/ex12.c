#include <stdio.h>
#include <unistd.h>
int main()
{
    int num, div, c;
    c=0;
    sleep(1);
    printf("Inserisci un numero\n");
    scanf("%d", &num);
    div=num-1;
    while(div>1)
    {
        if(num%div==0)
        {
            c=c+1;
        }
        div=div-1;
    }
    if(c==0 && num>1)
    {
        printf("Il tuo numero è primo\n");
    }
    else
    {
        printf("Il tuo numero non è primo\n");
    }
}