#include <stdio.h>

void inverser(int tab[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
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

    inverser(tab, n);

    printf("Tableau inversé : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}