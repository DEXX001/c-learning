#include <stdio.h>
#include <stdlib.h>

char **creer_prenoms(int n)
{
    char **tableau_prenom = NULL;

    tableau_prenom = malloc(n * sizeof(char*));
    if (tableau_prenom  == NULL)
        exit(EXIT_FAILURE);

    for (int i = 0; i < n; i++)
    {
        tableau_prenom[i] = malloc(50 *sizeof(char));
        printf("Entrez les prenoms %d : ", i + 1);
        scanf("%s", tableau_prenom[i]);
    }
    
    return tableau_prenom;   
}

int main()
{
    int n;
    printf("Combien de personne ? \n");
    scanf("%d", &n);

    char **tableau_prenom;
    tableau_prenom = creer_prenoms(n);

    if (tableau_prenom == NULL)
        exit(EXIT_FAILURE);
    
    
    for (int i = 0; i < n; i++)
    {
        printf("[%d] = %s \n", i + 1, tableau_prenom[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        free(tableau_prenom[i]);
    }
    
    free(tableau_prenom);

    return 0;
}