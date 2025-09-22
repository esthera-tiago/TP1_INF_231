# Cahier de suivi individuel — INF231 (TP)  
**Étudiant :** ONANA GREGOIRE LEGRAND  
**Matricule :** 24G2060  
**Groupe :** INF231_EC2  
**Exercice attribué :** Médiane dans un tableau et Inverser un tableau  
**Deadline :** 23/09/2025

---

## 1) Objectif de l'exercice
### 6. Médiane dans un tableau
Calculer la médiane d'un tableau d'entiers après l'avoir trié.

### 7. Inverser un tableau
Renverser l’ordre des éléments d’un tableau d’entiers.

---

## 2) Algorithme (description)

### 6. Médiane dans un tableau
1. Lire la taille du tableau `n`.
2. Lire `n` entiers dans le tableau.
3. Trier le tableau.
4. Calculer la médiane :
   - Si `n` est pair, la médiane est la moyenne des deux éléments du milieu.
   - Si `n` est impair, la médiane est l'élément du milieu.
5. Afficher la médiane.

### 7. Inverser un tableau
1. Lire la taille du tableau `n`.
2. Lire `n` entiers dans le tableau.
3. Inverser le tableau.
4. Afficher le tableau inversé.

---

## 3) Code source (fichiers : `median.c` et `reverse.c`)

### Fichier : `median.c`

```
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

float calculerMedian(int tab[], int n) {
    trier(tab, n);
    if (n % 2 == 0)
        return (tab[n / 2 - 1] + tab[n / 2]) / 2.0;
    else
        return tab[n / 2];
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
    float mediane = calculerMedian(tab, n);
    printf("La médiane est : %.2f\n", mediane);
    return 0;
}
```

### Fichier : `reverse.c`

```
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
```

---

## Compilation
Pour compiler les programmes, utilisez les commandes suivantes :

```bash
gcc -Wall -Wextra -O2 -o median median.c
gcc -Wall -Wextra -O2 -o reverse reverse.c
```

## Exécution
Pour exécuter les programmes, utilisez les commandes suivantes :

```bash
./median
./reverse
```

## Exemple d'entrée pour la médiane:
```
Entrez la taille du tableau : 5
Entrez les 5 éléments :
Élément 1 : 3
Élément 2 : 1
Élément 3 : 4
Élément 4 : 2
Élément 5 : 5
