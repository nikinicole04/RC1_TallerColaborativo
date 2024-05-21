#include <stdio.h>
#include <stdlib.h>
#include "lecturas.h"

int leerEnteroPositivo(char* mensaje) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
        if (valor <= 0) {
            printf("Error: el valor debe ser un entero positivo.\n");
        }
    } while (valor <= 0);
    return valor;
}

float leerFlotantePositivo(char* mensaje) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
        if (valor <= 0) {
            printf("Error: el valor debe ser un flotante positivo.\n");
        }
    } while (valor <= 0);
    return valor;
}

int leerEntero(char* mensaje) {
    int valor;
    printf("%s", mensaje);
    scanf("%d", &valor);
    return valor;
}

int leerEnteroEntre(int min, int max, char* mensaje) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
        if (valor < min || valor > max) {
            printf("Error: el valor debe estar entre %d y %d.\n", min, max);
        }
    } while (valor < min || valor > max);
    return valor;
}

float leerFlotante(char* mensaje) {
    float valor;
    printf("%s", mensaje);
    scanf("%f", &valor);
    return valor;
}

float leerFlotanteEntre(float min, float max, char* mensaje) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
        if (valor < min || valor > max) {
            printf("Error: el valor debe estar entre %.2f y %.2f.\n", min, max);
        }
    } while (valor < min || valor > max);
    return valor;
}

char leerCaracter(char* mensaje) {
    char valor;
    printf("%s", mensaje);
    scanf(" %c", &valor);
    return valor;
}
