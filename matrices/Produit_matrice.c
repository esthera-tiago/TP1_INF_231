#include <stdio.h>       
int main()
{         
    int n,n1,m,m1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;
    printf("Quel est le nombre de lignes de la première matrice?\n");
    scanf("%d",&n);
    printf("Quel est son nombre de colonnes?\n");
    scanf("%d",&m);
    printf("Quel est le nombre de lignes de la deuxième matrice?\n");
    scanf("%d",&n1);
    printf("Quel est son nombre de colonnes?\n");
    scanf("%d",&m1);
    if(m==n1)
    {
        float A[n][m],B[n1][m1],C[n][m1];
        //remplissage des matrices
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            { 
                printf("A[%d][%d]= ",i+1,j+1); 
                scanf("%f",&A[i][j]);
            }
        }
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<m1; j++)
            { 
                printf("B[%d][%d]= ",i+1,j+1);
                scanf("%f",&B[i][j]);
            }
        }
        //affichage des matrices 
        printf("Affichage de la Matrice A :\n");
        for (int i=0; i<n; i++) 
        {
            for (int j = 0; j<m; j++) 
            {
                printf("%.3f\t", A[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Affichage de la Matrice B :\n");
        for (int i=0; i<n1; i++) 
        {
            for (int j=0; j<m1; j++) 
            {
            printf("%.3f\t", B[i][j]);
            }
            printf("\n");
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m1; j++)
            { 
                C[i][j]=0;
                for(int k=0; k<m; k++)
                {
                    C[i][j] += A[i][k]*B[k][j];
                }
            } 
        }
        printf("\n\n");
        printf("Affichage de laMatrice C :\n");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m1; j++)
            {
                printf("%.3f\t",C[i][j]);
            }
            printf("\n");
        }
    }
    else if(n!=m1)
    {
        printf("multiplication impossible");
    }
    return 0;
}                                                                                                               