#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Veuillez entrer le nombre d'elements du tableau :\n");
    scanf("%d", &n);

    int tab[n];
    int min;
    int i;

    for(i=0; i<n; i++)
    {
        printf("Entrer l'element %d \n", i+1);
        scanf("%d", &tab[i]);
    }
    min = tab[0];
    for(i=1; i<n; i++)
    {
        if(tab[i]<min)
        {
            min = tab[i];
        }
    }
    printf("l'element le plus petit dans le tableau est : %d \n", min);

    return 0;
}
