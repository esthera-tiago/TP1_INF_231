#include <stdio.h>
#define T_MAX 1000
int main (int argc, char *argv[]){
    int A[T_MAX];
    int n, val;
    printf("\nEntre le nombre d'elements du tableaux: ");
    scanf("%d", &n);
    printf("\nEntre les valeurs du tableaux: ");

    for(int i=0; i<n; i++)
        scanf("%d", &A[i]);

    printf("Entre la valeur a rechercher: ");
    scanf("%d", &val);
    for(int i=0; i<n; i++){
        A[i] != val ?  : printf("valeur trouver a position %d du tableaux\n", i) ;
    }

    return 0;
}
