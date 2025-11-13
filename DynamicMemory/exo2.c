#include <stdio.h>
#include <stdlib.h>

int *creer_tableau(int n)
{
    int *tab = NULL;

    tab = malloc(n * sizeof(int));

    if (tab == NULL)
        exit(EXIT_FAILURE);
    
    for (int i = 0; i < n; i++)
    {
        printf("Valeur de l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    return tab;
    
}

int main()
{
    int n;

    printf("Combien d'elements voulez-vous ? ");
    scanf("%d", &n);

    int *tableau = creer_tableau(n);

    if (tableau == NULL)
        exit(EXIT_FAILURE);
    
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : [%d] \n", i + 1, tableau[i]);
    }
    
    free(tableau);

    return 0;
}
