#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];

    srand(time(NULL));

    printf("La matriz A es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 101;
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("La matriz B es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = rand() % 101;
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("La matriz resultante (C = A + B) es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
