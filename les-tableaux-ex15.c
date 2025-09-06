#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count1, count2;

    printf("Entrez le nombre d'element du premier tableau : \n");
    scanf("%d", &count1);

    int tab1[count1];                                                    // saisie l'elements du premier tableau tab1

    for(int i=0; i<count1; i++){
        printf("Entrez l'element %d du premier tableau : \n", i+1);
        scanf("%d", &tab1[i]);
    }

    printf("Entrez le nombre d'elements du dexieme tableau : \n");
    scanf("%d", &count2);

    int tab2[count2];                                                     // saisie l'elements du dexieme tableau tab2

    for(int i=0; i<count2; i++){
        printf("Entrez l'element %d du dexieme tableau : \n", i+1);
        scanf("%d", &tab2[i]);
    }
    int fusion[count1 + count2];                                        //declaration du fusion tableau

    for(int i=0; i<count1; i++){
        fusion[i] = tab1[i];                                          //copie le premier tableau
    }

    for(int i=0; i<count2; i++){
        fusion[count1 + i] = tab2[i];                               //copie le dexieme tableau
    }

    printf("les elements du tableau fusionnee sont : ");
    for(int i=0; i<count1+count2; i++){                          //print le tableau fusionnee
        printf("%d ", fusion[i]);
    }

    return 0;
}
