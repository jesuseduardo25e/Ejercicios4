#include <stdio.h>

int main() {
    int n1, n2, producto, suma;

    printf("\nIntroduzca el primer número (entero): ");
    scanf("%d", &n1);

    printf("\nIntroduzca el segundo número (entero): ");
    scanf("%d", &n2);

    suma = n1 + n2;
    producto = n1 * n2;

    printf("\nLa suma es: %d", suma);
    printf("\nLa multiplicación es: %d\n", producto);

    return 0;
}
