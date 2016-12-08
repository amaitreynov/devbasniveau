#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    char charChain[]= "etudiant";
    char chainToRemove[]= "tui";
    char *returnedChain;

    returnedChain = soustrait(charChain,chainToRemove);
    printf("Resultat de soustrait: %s \n", returnedChain);
    return 0;
}
