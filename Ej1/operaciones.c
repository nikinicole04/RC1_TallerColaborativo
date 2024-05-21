#include <stdio.h>
#include "operaciones.h"

void calcularPromedioAnual(float cosechas[], int size) {
    float suma = 0;
    for (int i = 0; i < size; i++) {
        suma += cosechas[i];
    }
    float promedio = suma / size;
    printf("Promedio anual de toneladas cosechadas: %.2f\n", promedio);
}

void contarMesesSuperioresPromedio(float cosechas[], int size) {
    float suma = 0;
    for (int i = 0; i < size; i++) {
        suma += cosechas[i];
    }
    float promedio = suma / size;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (cosechas[i] > promedio) {
            count++;
        }
    }
    printf("Cantidad de meses con cosecha superior al promedio: %d\n", count);
}

void encontrarMayorCosecha(float cosechas[], int size) {
    int mesMayor = 0;
    float maxCosecha = cosechas[0];
    for (int i = 1; i < size; i++) {
        if (cosechas[i] > maxCosecha) {
            maxCosecha = cosechas[i];
            mesMayor = i;
        }
    }
    printf("El mes con mayor cosecha es %d con %.2f toneladas.\n", mesMayor + 1, maxCosecha);
}
