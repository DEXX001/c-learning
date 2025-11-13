#include <stdio.h>
#include <stdlib.h>
#include "exo4.h"

Personne *creer_personnes(int n)
{
    Personne *fiche_personne;

    fiche_personne = malloc(n * sizeof(Personne));

    if (fiche_personne == NULL)
        exit(EXIT_FAILURE);

    for (int i = 0; i < n; i++)
    {
        printf("----Personne %d :----\n", i + 1);

        printf("Prenom : ");
        scanf("%s", fiche_personne[i].nom);

        printf("Age : ");
        scanf("%d", &fiche_personne[i].age);
    }

    return fiche_personne;
    
}

int main()
{
    int n;
    Personne *fiche;

    printf("Combien de personne ?\n");
    scanf("%d", &n);

    fiche = creer_personnes(n);

    if (fiche == NULL)
        exit(EXIT_FAILURE);

    for (int i = 0; i < n; i++)
    {
        printf("\n==========\n");
        printf("| Personne %d |\n| %s  %d |\n", i + 1, fiche[i].nom, fiche[i].age);
    }

    free(fiche);

    return 0;
    
}
