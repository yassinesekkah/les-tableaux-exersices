#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Entrez le nombre d'elements du tableau : \n");    //nombre saisie
    scanf("%d", &count);

    int tab[count];                                         //declaration
    int i;

    for(i=0; i<count; i++){
        printf("Entrez l'element %d : \n", i+1);               //saisie
        scanf("%d", &tab[i]);
    }

    printf("les nombres impairs dans le tableau sont : ");        //print les nombres impairs
    for(i=0; i<count; i++){
        if(tab[i]%2 != 0){
            printf("%d ", tab[i]);
        }
    }
    printf("\n");


    return 0;
}
