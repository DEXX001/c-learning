#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fic = fopen("texte.txt", "r");
    char texte[256];
    char mot_rechercher[80];
    int found = 0;

    if (fic == NULL)
        exit(EXIT_FAILURE);

    printf("\n===========\n");
    printf("Mot a rechercher : ");
    scanf("%s", mot_rechercher);
    printf("===========\n");    

    while (fgets(texte, 256, fic) != NULL)
    {
        if (strstr(texte, mot_rechercher) != NULL)
        {
            printf("Resultat trouver --> %s\n", mot_rechercher);
            found = 1;
        }
    }

    if (!found)
    {
         printf("INTROUVABLE");
         printf("\n===========\n");    
         exit(EXIT_FAILURE);
    }

    fclose(fic);

    return EXIT_SUCCESS;
}