#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("entrez les element saisi dans le tableau\n");
    scanf("%d", &n);

    int tab[n];
    int i, temp, j;

    for(i=0; i<n; i++)
    {
        printf("Entrez l'element %d : \n", i+1);
        scanf("%d", &tab[i]);
    }

    printf("le tableau avant tri : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }


    for(i=0; i<n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)  //n-1-i bach bla maneb9aw n9arno m3a nombre tali, hit fkol loop dyal j rah akbar 3adad wla howa tali
        {
            if(tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];   // swap
                tab[j+1] = temp;
            }
        }
    }
    printf("\nle tableau apres tri : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}
