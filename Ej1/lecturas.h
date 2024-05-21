#ifndef LECTURAS_H
 #include "lecturas.c"
#define LECTURAS_H

int leerEnteroPositivo(char* mensaje);
float leerFlotantePositivo(char* mensaje);
int leerEntero(char* mensaje);
int leerEnteroEntre(int min, int max, char* mensaje);
float leerFlotante(char* mensaje);
float leerFlotanteEntre(float min, float max, char* mensaje);
char leerCaracter(char* mensaje);

#endif
