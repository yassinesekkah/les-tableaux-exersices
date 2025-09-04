#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int i;
    int somme = 0;

    printf("Entree le nombres des elements vous saisie \n");
    scanf("%d", &count);

    int nombre[count];

    for(i=0; i<count; i++){
        printf("entre l'element %d \n", i+1);
        scanf("%d", &nombre[i]);
        somme = somme + nombre[i];

    }
    printf("somme = %d", somme);




    return 0;
}
