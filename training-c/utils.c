
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <string.h>

/**
Cette fonction soustraira les caractères contenus dans B à A et renverra un pointeur sur le résultat (donc un pointeur sur A).
Exemple : soustrait(‘’etudiant’’, ‘’tui’’) a pour résultat un pointeur sur la chaîne ‘’edan’’
*/
char *soustrait(char *A, char *B) {

    int i,j,x;

    for(i=0; i<(int)strlen(A); i++){
        for(j=0; j<(int)strlen(B); j++) {
            if(B[j] == A[i]) {
                for(x=i; x<(int)strlen(A); x++){
                        A[x] = A[x+1];
                }
            }

        }
    }
    return A;
}
