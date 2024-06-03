#include <stdio.h>

int main() {
    int numeros[10];
    int suma_pares = 0;
    int cantidad_pares = 0;

    // Leer los 10 números enteros
    printf("Introduce 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificar si es par
        if (numeros[i] % 2 == 0) {
            suma_pares += numeros[i];
            cantidad_pares++;
        }
    }

    // Calcular la media aritmética de los números pares
    float media_pares = (float)suma_pares / cantidad_pares;

    printf("\nSuma de los números pares: %d\n", suma_pares);
    printf("Cantidad de números pares: %d\n", cantidad_pares);
    printf("Media aritmética de los números pares: %.2f\n", media_pares);

    return 0;
}
