#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Entrez le nombre d'element de tableau : \n");        //nombre saisie
    scanf("%d", &count);

    int tab[count];
    int i, change, searchval;
    int found=0;

    for(i=0; i<count; i++)
    {
        printf("Entrez l'element %d : \n", i+1);                //saisie
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur a remplacer : \n");
    scanf("%d", &searchval);
                                                               //Demander la valeur a remplacer et la nouvelle valeur
    printf("Entrez la nouvelle valeur : \n");
    scanf("%d", &change);


    printf("\nLe tableau original est : ");
    for(i=0; i<count; i++)                                    //print l'original tableau
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    for(i=0; i<count; i++){
        if(tab[i] == searchval){                                 //la remplacement
            tab[i] = change;
            found = 1;
        }
    }
    if(found != 0){
        printf("\nLe tableau apres remplacement est : ");        //print apres remplacement
        for(i=0; i<count; i++){
            printf("%d ", tab[i]);
        }
        printf("\n");
    }
    else
    {
        printf("La valeur %d n'est pas presente dans le tableau.\n", searchval);        //print ila maw9a3ch le remplacement
    }

    return 0;
}
