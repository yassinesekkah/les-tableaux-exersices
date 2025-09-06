#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Entrez le nombre d'elements du tableau : \n");    //nombre que saisie
    scanf("%d", &count);

    int tab[count];                                   //declaration
    int i, temp;

    for(i=0; i<count; i++){
        printf("Entrez l'element %d \n", i+1);    // saisie l'elements
        scanf("%d", &tab[i]);
    }
    printf("le tableau avant l'inverse est : ");
    for(i=0; i<count; i++){                          //print avant
        printf("%d ", tab[i]);
    }

    for(i=0; i<count/2; i++){
        temp = tab[i];                              //inverse l'elements, count/2 bach may3awedch y inversihom 2eme fois wyarja3 kif kan
        tab[i] = tab[count-1-i];              //swap
        tab[count-1-i]= temp;
    }

    printf("\nle tableau apres l'inverse est : ");     //print apres l'inverst
    for(i=0; i<count; i++){
        printf("%d ", tab[i]);
    }

    return 0;
}
