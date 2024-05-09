#include <stdio.h>
#include <unistd.h>
int main()
{
    //Come far scegliere all'utente e dare l'effeto stampante
    printf("\033[0;31m");
    char stocazzo[100];
    int i = 0;
    printf("Inserisci il messaggio\n");
    fgets(stocazzo, sizeof(stocazzo), stdin);
    while (stocazzo[i] != '\0')
    {
        printf("%c", stocazzo[i]);
        fflush(stdout);
        usleep(100000);
        i++;
    }
}