#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;

    do {
        printf("Entrez le nombre d'elements du tableau (positif) : \n");          //nombre saisie, boucle bach netfadaw division par 0,
        scanf("%d", &count);
        if(count <= 0) {
            printf("Erreur : veuillez entrer un nombre positif. \n");
        }
    } while(count <= 0);

    float tab[count], somme = 0, moyenne;                                    //declaration
    int i;

    for(i=0; i<count; i++){
        printf("Entrez l'element %d : \n", i+1);             //saisie l'elements
        scanf("%f", &tab[i]);
        somme += tab[i];                                   // calcule  de la somme
    }
    moyenne = somme / count;                               //la moyenne formule

    printf("la somme = %.2f \n", somme);                     //print la somme et la moyenne
    printf("la moyenne = %.2f \n", moyenne);

    return 0;
}
