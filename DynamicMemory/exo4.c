#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fic = fopen("prenom.txt", "w");
    char prenom[50];

    if (fic == NULL)
        exit(EXIT_FAILURE);

    printf("Entre 5 prenoms : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", prenom);
        fprintf(fic, "%s\n", prenom);
    }
    
    fclose(fic);

    return EXIT_SUCCESS;
}