#include <stdio.h>
#include <stdlib.h>
#include utils.h /* Include the header here, to obtain the function declaration */

int main()
{
    char charChain[]= "etudiant";
    char chainToRemove[]= "tui";
    char returnedChain[] = soustrait(charChain,chainToRemove);

    printf("Chaine en entree: %c", charChain);
    printf("Chaine en sortie: %c", returnedChain);
    return 0;
}
