#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_NAME "----UNSET----"

int partita();

int main() {
    // Introduzione al programma
    printf("Benvenuto nel gioco a domande e risposte!\n");

    char scelta;
    int punteggio_totale = 0;
    char *nome = DEFAULT_NAME;

    do {
        printf("\nMENU:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);  // spazio prima di %c per evitare problemi con invio precedente

        switch (tolower(scelta)) {
            case 'a':
                if (strcmp(nome, DEFAULT_NAME) == 0) {
                    nome = malloc(512);
                    printf("Inserisci il tuo nome: ");
                    scanf("%s", nome);
                }

                int punteggio_partita = partita();
                punteggio_totale += punteggio_partita;

                printf("\n%s, hai totalizzato %d punti in questa partita.\n", nome, punteggio_partita);
                printf("Punteggio totale finora: %d punti\n", punteggio_totale);
                break;

            case 'b':
                printf("Grazie per aver giocato, %s! Punteggio finale: %d\n", nome, punteggio_totale);
                break;

            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }

    } while (tolower(scelta) != 'b');

    if (nome != DEFAULT_NAME) free(nome);
    return 0;
}

int partita() {
    int score = 0;
    int scelta;

    printf("\nDOMANDA 1:\n");
    printf("Di che colore era il cavallo bianco di Napoleone?\n");
    printf("1) Bianco\n2) Nero\n3) Giallo\nRisposta: ");
    scanf("%d", &scelta);
    if (scelta == 1) {
        score += 1;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    printf("\nDOMANDA 2:\n");
    printf("Quanto fa 3 + 2?\n");
    printf("1) 4\n2) 5\n3) 6\nRisposta: ");
    scanf("%d", &scelta);
    if (scelta == 2) {
        score += 1;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    printf("\nDOMANDA 3:\n");
    printf("Qual è la capitale dell'Italia?\n");
    printf("1) Roma\n2) Milano\n3) Napoli\nRisposta: ");
    scanf("%d", &scelta);
    if (scelta == 1) {
        score += 1;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    return score;
}
