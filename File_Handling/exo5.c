#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fsource = fopen("source.txt", "r");
    FILE *fcopy = fopen("copy.txt", "w");
    char texte[256];

    if (fsource == NULL)
        exit(EXIT_FAILURE);
    
    if (fcopy == NULL)
        exit(EXIT_FAILURE);
    
        while (fgets(texte, 256, fsource))
        {
            fprintf(fcopy,  "%s", texte);
        }
    
    fclose(fsource);
    fclose(fcopy);

    return EXIT_SUCCESS;
        
}