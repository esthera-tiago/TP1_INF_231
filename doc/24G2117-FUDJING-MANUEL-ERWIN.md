# Cahier de suivi individuel — INF231 (TP)

**Étudiant :** FUDJING Manuel Erwin  
**Matricule :** 24G2117  
**Groupe :** INF231_EC2  

---

## Exercices attribués

- Addition de deux matrices (`addition_matrice.c`)  
- Multiplication de deux matrices (`Produit_matrice.c`)  

---

## 1) Objectif des exercices  

🔹 **Addition de matrices**  
Écrire un programme en C qui effectue la somme de deux matrices de mêmes dimensions et affiche le résultat.  

🔹 **Produit de matrices**  
Écrire un programme en C qui calcule le produit de deux matrices (m×n et n×p) et affiche la matrice résultante.  

---

## 2) Algorithmes (description)  

### 🔹 Addition de matrices  

1. Lire les dimensions de la matrice (lignes et colonnes).  
2. Lire les éléments de la matrice A.  
3. Lire les éléments de la matrice B.  
4. Créer une matrice C telle que `C[i][j] = A[i][j] + B[i][j]`.  
5. Afficher la matrice C.  

---

### 🔹 Multiplication de matrices  

1. Lire les dimensions m, n et p.  
2. Lire les éléments de la matrice A (m×n).  
3. Lire les éléments de la matrice B (n×p).  
4. Initialiser une matrice C de dimension (m×p) avec des zéros.  
5. Pour chaque élément C[i][j], calculer :  

   ```
   C[i][j] = Somme(A[i][k] * B[k][j]) pour k = 0..n-1
   ```  

6. Afficher la matrice C.  

---

## 3) Codes sources  

### 🔹 Addition de matrices (`addition_matrice.c`)
```c
#include <stdio.h>
int main()
{
    int n,n1,m,m1;
    printf("Quel est le nombre de lignes de la matrice A:");
    scanf("%d",&n);
    printf("Quel est le nombre de colonnes de la matrice A:");
    scanf("%d",&m);
    printf("Quel est le nombre de lignes de la matrice B:");
    scanf("%d",&n1);
    printf("Quel est le nombre de colonnes de la matrice B:");
    scanf("%d",&m1);
    if(n==n1 && m==m1){
        int A[n][m],B[n1][m1],C[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("A[%d][%d]=",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("la matrice C=A+B est:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("l'addition n'est pas possible car les matrices n'ont pas la meme dimension\n");
    }
    return 0;
}
```

---

### 🔹 Produit de matrices (`Produit_matrice.c`)
```c
#include <stdio.h>
int main()
{
    int n,n1,m,m1;
    printf("Quel est le nombre de lignes de la matrice A:");
    scanf("%d",&n);
    printf("Quel est le nombre de colonnes de la matrice A:");
    scanf("%d",&m);
    printf("Quel est le nombre de lignes de la matrice B:");
    scanf("%d",&n1);
    printf("Quel est le nombre de colonnes de la matrice B:");
    scanf("%d",&m1);
    if(m==n1){
        int A[n][m],B[n1][m1],C[n][m1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("A[%d][%d]=",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                C[i][j]=0;
                for(int k=0;k<m;k++){
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        printf("la matrice C=A*B est:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("la multiplication n'est pas possible car le nombre de colonnes de A est different du nombre de lignes de B\n");
    }
    return 0;
}
```

---

## 4) Compilation et exécution  

### Compilation  
```bash
gcc -o addition_matrice addition_matrice.c
gcc -o produit_matrice Produit_matrice.c
```

### Exemple d’exécution (Addition)  
```
Quel est le nombre de lignes de la matrice A:2
Quel est le nombre de colonnes de la matrice A:2
Quel est le nombre de lignes de la matrice B:2
Quel est le nombre de colonnes de la matrice B:2
A[0][0]=1
A[0][1]=2
A[1][0]=3
A[1][1]=4
B[0][0]=5
B[0][1]=6
B[1][0]=7
B[1][1]=8
la matrice C=A+B est:
6   8
10  12
```

