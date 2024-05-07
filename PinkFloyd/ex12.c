#include <stdio.h>
#include <unistd.h>
int main()
{
    int n;
    int a;
    int c=0;
    a=n-1;
    sleep(1);
    printf("Scegli un numero:\n");
    scanf("%d", &n);
    while(n/a)
    {
        if (n%a == 0)
        {
            c=c+1;
        }
    }
}