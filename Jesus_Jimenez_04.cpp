#include <stdio.h>

int main() {
    int n = 100; // N�mero de t�rminos
    long long suma_cuadrados = 0; // Inicializamos la suma como un entero largo

    // Calculamos la suma de los cuadrados
    for (int i = 1; i <= n; i++) {
        suma_cuadrados += (long long)i * i;
    }

    printf("La suma de los cuadrados de los primeros %d n�meros naturales es: %lld\n", n, suma_cuadrados);

    return 0;
}
