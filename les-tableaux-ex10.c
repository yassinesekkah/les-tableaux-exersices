#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    printf("Entrez le nombre d'element de tableau : \n");               // nombre saisie
    scanf("%d", &count);

    int tab[count];
    int i, searchval, found=0;                                          //declaration des variables

    for(i=0; i<count; i++){
        printf("Entre l'element %d : \n", i+1);                         //saisie l'elements
        scanf("%d", &tab[i]);
    }
    printf("Entre l'element a recherche : \n");                         // saisie le nombre que recherche
    scanf("%d", &searchval);

    for(i=0; i<count; i++){
        if(searchval == tab[i]){
            found = 1;
            printf("l'element %d est present dans la position %d .\n", searchval, i+1);      //recherche et print ila kan present
            break;                                                                        //break pour sortie la boucle ila kan present
        }
    }
    if (found == 0){
        printf("l'element %d n'est pas present dans le tableau .\n", searchval);           // print n'est pas present
    }
    return 0;
}
