#include <stdio.h>

int main() {
    float num, largest = 0;

    printf("Introduce números positivos distintos de cero (termina con -99):\n");

    do {
        printf("Número: ");
        scanf("%f", &num);

        if (num > largest && num != -99) {
            largest = num;
        }
    } while (num != -99);

    printf("El número mayor es: %.2f\n", largest);

    return 0;
}
