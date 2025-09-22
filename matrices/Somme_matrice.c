#include <stdio.h>
int main()
{
    int n,m;
    printf("quelle est le nombre de ligne des matrices?\n");
    scanf("%d",&n);
    printf("quel est le nombre de colonnes\n");
    scanf("%d",&m);
    float A[n][m],B[n][m],C[n][m];
    //remplissage des matrices
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        { 
            printf("A[%d][%d]= ", i+1, j+1); 
            scanf("%f",&A[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        { 
            printf("B[%d][%d]= ", i+1, j+1);
            scanf("%f",&B[i][j]);
        }
    }
    //affichage des matrices 
    printf("Matrice A :\n");
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) 
        {
            printf("%.3f\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrice B :\n");
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++) 
        {
        printf("%.3f\t", B[i][j]);
        }
        printf("\n");
    }
    //creation des element de C
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        { 
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\n\n");
    //impression du résultat
    printf("Matrice C :\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++);
        {
            printf("%.3f\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}