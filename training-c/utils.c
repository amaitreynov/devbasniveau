
#include <stdio.h>
#include <stdlib.h>
#include "foo.h"  /* Include the header (not strictly necessary here) */

/**
Cette fonction soustraira les caractères contenus dans B à A et renverra un pointeur sur le résultat (donc un pointeur sur A).
Exemple : soustrait(‘’etudiant’’, ‘’tui’’) a pour résultat un pointeur sur la chaîne ‘’edan’’
*/
char *soustrait(char *A, char *B) {

    int i=0;
    int j=0;

    for(i; i<sizeof(A);i++){
        for(j; j<sizeof(B);j++) {
            printf("B[i]: %c, A[i]: %c", B[i], A[i]);
        }
    }
}
