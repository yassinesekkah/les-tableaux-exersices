#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrez le nombre d'elements du tableau\n");  // nombre saisie
    scanf("%d", &n);

    int tab[n], copytab[n];                          // declaration
    int i;

    for(i=0; i<n; i++){
        printf("Entrez l'element tab[%d] = \n", i);   //saisie
        scanf("%d", &tab[i]);
        copytab[i] = tab[i];                        // copy

    }
    printf("le tableau original est : ");
    for (i=0; i<n; i++){                              // print original
        printf("%d ", tab[i]);
    }

    printf("\n");
    printf("le tableau copie est : ");             // print copie
    for(i=0; i<n; i++){
        printf("%d ",copytab[i]);

    }

    return 0;
}
