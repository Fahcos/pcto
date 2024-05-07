#include <stdio.h>

int main()
{
    int a;
    printf("Inserisci l'età:\n");
    scanf("%d", &a);
    if (a>=18 && a<=30)//&&=and ||=or !=not (ti dà il contrario)
    {
        printf("Giovane\n");
    }
      else if (a<18)
      {
        printf("Giovane\n");
      }
      else if (a>=60 && a<=100)
      {
        printf("Vecchio\n");
      }
}