#include <stdio.h>
#include "lecturas.h"
#include "operaciones.h"

#define NUM_MESES 12

void mostrarMenu() {
    printf("\nMenú de opciones:\n");
    printf("1. Calcular promedio anual de toneladas cosechadas.\n");
    printf("2. Contar meses con cosecha superior al promedio.\n");
    printf("3. Encontrar el mes con mayor cosecha.\n");
    printf("4. Salir.\n");
    printf("Seleccione una opción: ");
}

int main() {
    float cosechas[NUM_MESES] = {30.5, 45.3, 28.7, 33.2, 25.6, 29.8, 35.4, 38.1, 42.5, 31.0, 27.9, 40.3};
    int opcion;
    
    do {
        mostrarMenu();
        opcion = leerEntero("Opción: ");
        
        if (opcion == 1) {
            calcularPromedioAnual(cosechas, NUM_MESES);
        } else if (opcion == 2) {
            contarMesesSuperioresPromedio(cosechas, NUM_MESES);
        } else if (opcion == 3) {
            encontrarMayorCosecha(cosechas, NUM_MESES);
        } else if (opcion == 4) {
            printf("Saliendo del programa.\n");
        } else {
            printf("Opción no válida. Por favor, intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}



