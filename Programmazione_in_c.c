/* File: aree_math.c */
/* Programma che calcola le aree di alcune figure geometriche partendo da un valore inserito da tastiera */

#include <stdio.h>    // Libreria per input/output
#include <stdlib.h>   // Libreria per la funzione exit()
#include <math.h>     // Libreria per funzioni matematiche come sqrt() e costante M_PI

int main(void)
{
    float d;                // Valore inserito dall'utente (lato o diametro)
    float aq, ac, at;       // Aree di quadrato, cerchio, triangolo
    float r;                // Raggio del cerchio

    /* Introduzione al programma */
    printf("Calcolo delle aree di tre figure geometriche\n");
    printf("-> Quadrato di lato D\n");
    printf("-> Cerchio di diametro D\n");
    printf("-> Triangolo equilatero di lato D\n\n");

    /* Lettura del valore D da tastiera */
    printf("Inserisci un numero reale (D): ");
    scanf("%f", &d);

    /* Calcolo area del quadrato: lato * lato */
    aq = pow(d, 2);  // alternativa: aq = d * d;

    /* Calcolo area del cerchio: π * (raggio)^2 */
    r = d / 2;
    ac = M_PI * pow(r, 2);  // uso M_PI invece di 3.14

    /* Calcolo area del triangolo equilatero: (lato^2 * √3) / 4 */
    at = (pow(d, 2) * sqrt(3)) / 4;

    /* Stampa dei risultati */
    printf("\nRISULTATI:\n");
    printf("Area del quadrato di lato %.2f = %.2f\n", d, aq);
    printf("Area del cerchio di diametro %.2f = %.2f\n", d, ac);
    printf("Area del triangolo equilatero di lato %.2f = %.2f\n", d, at);

    exit(0);  // Termina il programma
}
