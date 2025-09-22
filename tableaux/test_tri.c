#include <stdio.h>
#define T_MAX 1000
int main (int argc, char *argv[]){
    int A[T_MAX];
    unsigned int n, asc=0, desc=0;
    printf("\nEntre le nombre d'elements du tableaux: ");
    scanf("%d", &n);
    printf("\nEntre les valeurs du tableaux: ");

    for(int i=0; i<n; i++)
        scanf("%d", &A[i]);


    for(int i=0; i<n-1; i++)
        A[i] <= A[i+1]  ?  (asc+=1) : (desc+=1);

    asc == n-1 ? printf("\nTableaux trie pars ordre croisant.") : (desc == n-1 ? printf("\nTableaux trie pars ordre decroisant.") : printf("Tableaux pas trie"));

    return 0;
}
