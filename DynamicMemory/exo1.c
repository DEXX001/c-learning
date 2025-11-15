#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fic = fopen("texte.txt", "r");
    char texte[256];

    if (fic == NULL)
        exit(EXIT_FAILURE);

    while (fgets(texte, 256, fic) != NULL )
    {
        printf("%s\n", texte);
    }
        
   fclose(fic);

   return 0;
}