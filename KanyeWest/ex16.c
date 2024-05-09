#include <stdio.h>

int main() {
    // Sequenza di escape ANSI per cambiare il colore del testo a rosso
    printf("\033[0;31m"); // 0; indica che non ci sono stili aggiuntivi, 31 indica il colore rosso

    // Stampa del testo rosso
    printf("Questo testo è rosso!\n");

    // Sequenza di escape ANSI per ripristinare il colore predefinito del testo
    printf("\033[0m");

    // Stampa del testo normale (con il colore predefinito del terminale)
    printf("Questo testo è tornato al colore predefinito.\n");

    return 0;
}