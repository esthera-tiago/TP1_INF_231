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
