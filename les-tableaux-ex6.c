#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    printf("Entrez le nombre d'elements du tableau : \n");
    scanf("%d", &count);

    int tab[count], res[count];
    int i, facteur;


    for(i=0; i<count; i++){
        printf("Entrez l'element %d : \n", i+1);
        scanf("%d", &tab[i]);
    }
    printf("Entrez le facteur de multiplication : \n");
    scanf("%d", &facteur);

    printf("tableau original est : ");
    for(i =0; i<count; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Le nouveau tableau est : ");
    for(i=0; i<count; i++){
        res[i] = facteur*tab[i];
        printf("%d ", res[i]);
    }
    return 0;
}
