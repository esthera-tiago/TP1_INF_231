# Cahier de suivi individuel — INF231 (TP)
**Étudiant :** Keubou Fotsa Willy 
**Matricule :** 24F2657
**Groupe :** INF231_EC2  
**Exercices attribués :**
- Calcul du produit vectoriel en 3D (`produit_vectoriel.c`)

---

## 1) Objectif des exercices

### 🔹 Produit vectoriel 3D
Écrire un programme en **C** qui calcule le produit vectoriel de deux vecteurs à 3 dimensions.
- Saisir les composantes des deux vecteurs A et B.
- Calculer le vecteur résultant C = A × B.
- Afficher les trois vecteurs avec leurs composantes.

---

## 2) Algorithmes (description)

### 🔹 Produit vectoriel 3D
1. Déclarer trois tableaux de taille 3 pour les vecteurs A, B et C.
2. Saisir les 3 composantes du vecteur A avec une boucle for.
3. Saisir les 3 composantes du vecteur B avec une boucle for.
4. Calculer le produit vectoriel 
5. Afficher les trois vecteurs.

**Formule mathématique :**
- C[0] = A[1] × B[2] - A[2] × B[1]
- C[1] = A[2] × B[0] - A[0] × B[2]  
- C[2] = A[0] × B[1] - A[1] × B[0]

**Complexité temporelle :** O(1).  
**Complexité mémoire :** O(1).

---

## 3) Codes sources

### 🔹 Produit vectoriel 3D (`produit_vectoriel.c`)
```c
#include <stdio.h>

int main() {
    float a[3], b[3], c[3];
    int i;
    
    printf("Vecteur A :\n");
    for(i = 0; i < 3; i++) {
        printf("Composante %d : ", i);
        scanf("%f", &a[i]);
    }
    
    printf("Vecteur B :\n");
    for(i = 0; i < 3; i++) {
        printf("Composante %d : ", i);
        scanf("%f", &b[i]);
    }
    
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
    
    printf("\nA = (%.2f, %.2f, %.2f)\n", a[0], a[1], a[2]);
    printf("B = (%.2f, %.2f, %.2f)\n", b[0], b[1], b[2]);
    printf("A x B = (%.2f, %.2f, %.2f)\n", c[0], c[1], c[2]);
    
    return 0;
}
```

# Compilation
```bash
gcc -o produit_vectoriel ./vecteurs/produit_vectoriel.c
```

# Exécution
```bash
./produit_vectoriel
```
```bash
Vecteur A :
Composante 0 : 1
Composante 1 : 2
Composante 2 : 3
Vecteur B :
Composante 0 : 4
Composante 1 : 5
Composante 2 : 6

A = (1.00, 2.00, 3.00)
B = (4.00, 5.00, 6.00)
A x B = (-3.00, 6.00, -3.00)
```