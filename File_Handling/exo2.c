#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fic = fopen("texte.txt", "r");
    char texte[256];
    int nb_lignes= 0;

    if (fic == NULL)
        exit(EXIT_FAILURE);
    
    while(fgets(texte, 256, fic) != NULL)
    {
        nb_lignes++;
    }

    printf("Le fichier continet %d lignes", nb_lignes);

    return 0;
}