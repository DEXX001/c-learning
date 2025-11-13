#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombredejoueur = 0;
    int *pjoueur = NULL;

    printf("Entrez le nombre de joueurs : ");
    scanf("%d", &nombredejoueur);

    pjoueur = malloc(nombredejoueur * sizeof(int));

    if(pjoueur == NULL)
        exit(EXIT_FAILURE);

    printf("\n");

    for (int i = 0; i < nombredejoueur; i++)
    {
        printf("Valeur du joueur %d : ", i + 1);
        scanf("%d", &pjoueur[i]);
    }

    printf("=============\n");
    printf("Liste des joueurs : \n");
    for (int i = 0; i < nombredejoueur; i++)
    {
        printf("Joueur %d = %d | ", i + 1, pjoueur[i]);
    }
    
    free(pjoueur);

    return 0;
}
