#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tot;
    int i;

    printf("Entre le nombre d'elements du tableaux\n");
    scanf("%d", &tot);

    int nombre[tot];

    for(i =0; i<tot; i++)
    {
        printf("entree l'element %d\n", i+1);
        scanf("%d", &nombre[i]);
    }
    for(i=0; i<tot; i++)
    {
        printf("%d ", nombre[i]);
    }

    return 0;
}
