#include <stdio.h>

int main() {
    int m, n, d;
    printf("Ingrese el número de matrices: ");
    scanf("%d", &d);
    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    int matrizTridimensional[d][n][m];

    // Inicializar y mostrar los elementos del arreglo tridimensional
    for (int k = 0; k < d; k++) {
        printf("Matriz %d:\n", k + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Si es la última matriz, inicializa en 1, de lo contrario en 0
                if (k == d - 1) {
                    matrizTridimensional[k][i][j] = 1;
                } else {
                    matrizTridimensional[k][i][j] = 0;
                }
                // Imprimir el valor actual
                printf("%d ", matrizTridimensional[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
