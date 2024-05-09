#include <stdio.h>
#include <unistd.h>
int main()
{
    char* message = "stocazzo\n";
    int i = 0;

    while (message[i] != '\0') 
    {
        printf("%c", message[i]);
        fflush(stdout); // Assicura che l'output sia stampato immediatamente

        // Aggiungi un ritardo tra i caratteri (puoi regolare questo valore per controllare la velocità)
        usleep(100000); // Ritardo di 100 millisecondi (100000 microsecondi)
        i++;
    }
}