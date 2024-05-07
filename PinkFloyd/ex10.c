#include <stdio.h>
#include <unistd.h>

int main()
{
    int a;
    printf("Anno in cui sei nato/a:\n");
    scanf("%d", &a);
    if (a<1969)
    {
        printf("Sei nato/a");
        printf(" %d", 1969-a);
        printf(" anni prima dell'allunaggio\n");
    }
    else if (a>1969)
    {
        printf("Sei nato/a");
        printf(" %d", a-1969);
        printf(" anni dopo l'allunaggio\n");
    }
    else if(a=1969)
    {
        printf("Sei nato/a lo stesso anno dell'allunaggio\n");
    }
    
    


}