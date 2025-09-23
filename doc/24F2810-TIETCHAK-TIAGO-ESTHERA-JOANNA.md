# Cahier de suivi individuel - TP INF 321
> ---
> 
> ## Informations personnel
> 
> #-**Nom:** TIETCHAK TIAGO ESTHERA JOANNA
> #-**Matricule:** 24F2810
> #-**Exercice attribué :** Produit vecteur-matrice
> ---
> 
> ## 1. **Objectif de l'exercice** 
> 
> Réaliser le produit d'un vecteur (matrice ligne) par une matrice. Si le vecteur a pour taille `n` et la matrice a pour dimensions `n × m`, le résultat sera un vecteur de taille `m`.
>
> ---
> 
> ## 2. **Algorithme (describtion)**
> 
> - Lire la taille (dimension) du vecteur n
> - Lire les n éléments du vecteur
> - Lire la dimension de la matrice n x m:
>       => verifier la compatipilité que les nombres de lignes de la matrice est égale a la taille du vecteur (n)
> - Afficher le vecteur
> - Afficher la matrice
> - Calculez le produit vecteur matrice
> - Afficher le vecteur résultat de taille m
>
> ---

> ## 3. **Code source**

```c
#include <stdio.h>
#define TMax 50

int V[TMax], M[TMax][TMax], result[TMax];
int t, n, m;

void createMatrix(int n, int m, int M[n][m]){
    printf("\nEntrer les elements de la matrice de dimension %d x %d: \n", n, m);
    for(int i = 0; i < n; i++){
        printf("\n Ligne %d: ", i+1);
        for(int j = 0; j < m; j++){
            printf("\n Colonne %d: ", j+1);
            while(scanf("%d", &M[i][j]) != 1){
                printf("\nEntrer invalide! Veuillez entrer un entier: ");
                while(getchar() != '\n');
            }
        }
    }
    printf("\nInitialisation de la matrice réussi!\n");
}

void createVector(int t, int V[t]){
    printf("\nEntrer les valeurs du verteurs: \n");
    for(int i = 0; i < t; i++){
        printf("\n Vecteur [%d]: ", i+1);
        while(scanf("%d", &V[i]) != 1){
            printf("\nEntrer invalide! Veuillez entrer un entier: ");
            while(getchar() != '\n');
        }
    }
} 

void displayMatrix(int n, int m, int M[n][m]){
    int max_width = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int num = M[i][j];
            int width = (num == 0) ? 1 : 0;

            if(num < 0){
                width++;
                num = -num;
            }
            while(num > 0){
                width++;
                num /= 10;
            }
            if(width > max_width){
                max_width = width;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("[ ");
        for(int j = 0; j < m; j++){
            printf("%*d ", max_width, M[i][j]);
        }
        printf(" ]\n");
    }

}

void displayVector(int t, int V[t]){
    printf("[ ");
    for(int i = 0; i < t; i++){
        printf("%d ", V[i]);
    }
    printf("]");
}

void productVetorMatrix(int t, int V[t], int n, int m, int M[n][m], int result[m]){
    for(int j = 0; j < m; j++){
        result[j] = 0;
        for(int i = 0; i < n; i++){
            result[j] += V[i] * M[i][j];
        }
    }
}

int main(){
    printf("\n__________________________ Bienvenue sur notre logiciel! __________________________\n");
    printf("\n\033[34m Calculez le produit vecteur matrice\033[0m\n");
    printf("\nEntrer la dimension du vecteur: ");
    while(scanf("%d", &t) != 1){
        printf("\n Entrer invalide! Veuillez réessayer: ");
        while(getchar() != '\n');
    }
    createVector(t, V);
    printf("\nEntrer les dimension de la matrice.\n \n\033[34mLe nombre de lignes de la matrice doit correspondre à la dimension %d du vecteur\033[0m\n", t);
    printf("\n Nombres de lignes: ");
    while((scanf("%d", &n) != 1) || n != t){
        printf(" Entrer invalide! Veuillez réessayer: ");
        while(getchar() != '\n');
    }
    printf("\n Nombres de colonnes: ");
    while(scanf("%d", &m) != 1){
        printf("\n Entrer invalide! Veuillez réessayer: ");
        while(getchar() != '\n');
    }
    createMatrix(n, m, M);
    printf("\nLe produit du vecteur,\n\n V = ");
    displayVector(t, V);
    printf("\n\nEt de la matrice, M = ");
    displayMatrix(n, m, M);
    printf("\nA pour resultat: \n");
    productVetorMatrix(t, V, n, m, M, result);
    displayVector(m, result);
    printf("\n");
    return 0;
}
```
---

## 4. **Compilation**
> 
> ### Pour compiler le programme, utilisez la commande:
> gcc produit_vect_matrice.c -o produit_vect_matrice
>
> ---
> 
> ## 5. **Exécutions**
> 
> ### Pour exécuter le programme, utilisez la commande:
> ./produit_vect_matrice
>
> ---
> 
> ## 6. **Tests**
> 
> __________________________ Bienvenue sur notre logiciel! __________________________

 Calculez le produit vecteur matrice

Entrer la dimension du vecteur: 3

Entrer les valeurs du verteurs: 

 Vecteur [1]: 2

 Vecteur [2]: 3

 Vecteur [3]: 4

Entrer les dimension de la matrice.
 
Le nombre de lignes de la matrice doit correspondre à la dimension 3 du vecteur

 Nombres de lignes: 5
 Entrer invalide! Veuillez réessayer: 3

 Nombres de colonnes: 2

Entrer les elements de la matrice de dimension 3 x 2: 

 Ligne 1: 
 Colonne 1: 2

 Colonne 2: 2

 Ligne 2: 
 Colonne 1: 3

 Colonne 2: 1

 Ligne 3: 
 Colonne 1: 3

 Colonne 2: 1

Initialisation de la matrice réussi!

Le produit du vecteur,

 V = [ 2 3 4 ]

Et de la matrice, M = 
[ 2 2  ]
[ 3 1  ]
[ 3 1  ]

A pour resultat: 
[ 25 11 ]
> 

