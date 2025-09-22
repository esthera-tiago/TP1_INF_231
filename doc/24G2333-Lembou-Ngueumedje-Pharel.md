# Cahier de suivi individuel — INF231 (TP)  
**Étudiant :** Lembou Ngueumedje Pharel  
**Matricule :** 24G2333  
**Groupe :** INF231_EC2  
**Exercices attribués :**  
- Recherche séquentielle dans un tableau (`recherche_seq.c`)  
- Vérification si un tableau est trié (`test_tri.c`)   

---

## 1) Objectif des exercices

### 🔹 Recherche séquentielle  
Écrire un programme en **C** qui parcourt un tableau de taille `n` et recherche une valeur donnée `val`.  
- Si la valeur est trouvée, afficher sa position.  
- Sinon, indiquer qu’elle n’existe pas dans le tableau.  

### 🔹 Test de tri  
Écrire un programme en **C** qui vérifie si un tableau d’entiers est :  
- trié en ordre croissant,  
- trié en ordre décroissant,  
- ou non trié.  

---

## 2) Algorithmes (description)

### 🔹 Recherche séquentielle
1. Lire `n` (taille du tableau).  
2. Lire les `n` éléments du tableau.  
3. Lire la valeur `val` à rechercher.  
4. Parcourir le tableau :  
   - Si `A[i] == val`, afficher la position et arrêter.  
   - Sinon continuer.  
5. Si fin du parcours sans succès → afficher "valeur non trouvée".  

**Complexité temporelle :** O(n).  
**Complexité mémoire :** O(1).  

### 🔹 Test de tri
1. Lire `n` (taille du tableau).  
2. Lire les `n` éléments.  
3. Initialiser deux compteurs : `asc` et `desc`.  
4. Comparer chaque paire `(A[i], A[i+1])`.  
   - Si `A[i] <= A[i+1]` → incrémenter `asc`.  
   - Sinon → incrémenter `desc`.  
5. Après parcours :  
   - Si `asc == n-1` → tableau trié en croissant.  
   - Si `desc == n-1` → tableau trié en décroissant.  
   - Sinon → tableau non trié.  

**Complexité temporelle :** O(n).  
**Complexité mémoire :** O(1).  

---

## 3) Codes sources  

### 🔹 Recherche séquentielle (`recherche_seq.c`)  

```c
#include <stdio.h>
#define T_MAX 1000

int main(void) {
    int A[T_MAX];
    int n, val, found = 0;

    printf("\nEntrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    printf("Entrez les valeurs du tableau: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Entrez la valeur a rechercher: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (A[i] == val) {
            printf("Valeur trouvee a la position %d du tableau.\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Valeur non trouvee dans le tableau.\n");

    return 0;
}
```

```c
#include <stdio.h>
#define T_MAX 1000

int main(void) {
    int A[T_MAX];
    unsigned int n, asc = 0, desc = 0;

    printf("\nEntrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    printf("Entrez les valeurs du tableau: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n - 1; i++) {
        if (A[i] <= A[i + 1]) asc++;
        else desc++;
    }

    if (asc == n - 1)
        printf("\nTableau trie par ordre croissant.\n");
    else if (desc == n - 1)
        printf("\nTableau trie par ordre decroissant.\n");
    else
        printf("\nTableau non trie.\n");

    return 0;
}

```

# Compilation

```bash
gcc -o recherche_seq ./tableaux/recherche_seq.c
gcc -o test_tri ./tableaux/test_tri.c
```

# Exécution
```bash
./recherche_seq.c
```

```bash
Entrez le nombre d'elements du tableau: 5
Entrez les valeurs du tableau: 3 7 9 2 5
Entrez la valeur a rechercher: 9
Valeur trouvee a la position 2 du tableau.
```

