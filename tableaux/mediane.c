#include <stdio.h>
#include <stdlib.h>

void trier(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (tab[j] < tab[min])
                min = j;
        }
        int temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}

float calculerMediane(int tab[], int n) {
    trier(tab, n);
    if (n % 2 == 0)
        return (tab[n/2 - 1] + tab[n/2]) / 2.0;
    else
        return tab[n/2];
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    float mediane = calculerMediane(tab, n);
    printf("La médiane est : %.2f\n", mediane);

    return 0;
}