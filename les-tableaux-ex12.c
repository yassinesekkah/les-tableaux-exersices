#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    printf("Entrer le nombre d'elements du tableau : \n");   //nombre saisie
    scanf("%d", &count);

    int tab[count];
    int i;                                                //declaration

    for(i=0; i<count; i++){
        printf("Entrez l'element %d : \n", i+1);               //saisie
        scanf("%d", &tab[i]);
    }
    printf("les nombres pairs dans le tableau sont : ");
    for(i=0; i<count; i++){                                    //print les nombres pairs
        if(tab[i]%2 == 0){
            printf("%d ", tab[i]);
        }
    }
    printf("\n");
    return 0;
}
