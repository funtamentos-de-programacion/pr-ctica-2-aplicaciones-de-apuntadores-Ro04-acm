#include<stdio.h>

// Declaración de funciones
void pasarValor(int);
void pasarReferencia(int *);

int main() {
  int nums[] = {55,44,33,22,11}; // Arreglo de enteros
  int *ap; // Puntero de tipo entero
  ap = nums; // El puntero apunta al primer elemento del arreglo
  
  printf("Valor inicial: %d\n", *ap); // Imprime el primer valor del arreglo

  // Llamada a la función por valor
  printf("Pasar valor:\n");
  pasarValor(*ap); // Pasar el primer valor del arreglo por valor
  printf("Valor despues de pasar por valor: %d\n", *ap); // Imprime el valor del arreglo después del paso por valor

  // Llamada a la función por referencia
  printf("Pasar referencia:\n");
  pasarReferencia(ap); // Pasar el puntero del primer elemento por referencia
  printf("Valor despues de pasar por referencia: %d\n", *ap); // Imprime el valor modificado en el arreglo

  printf("Valor final: %d\n", *ap); // Imprime el valor final del arreglo

  return 0;
}

// Definición de la función pasarValor: recibe un valor por copia
void pasarValor(int equis) {
  printf("Valor dentro de pasarValor (antes de modificar): %d\n", equis); // Imprime el valor original
  equis = 128; // Modifica el valor local
  printf("Valor dentro de pasarValor (despues de modificar): %d\n", equis); // Imprime el valor modificado
}

// Definición de la función pasarReferencia: recibe un puntero y modifica directamente el valor en memoria
void pasarReferencia(int *equis) {
  printf("Valor dentro de pasarReferencia (antes de modificar): %d\n", *equis); // Imprime el valor original
  *equis = 128; // Modifica el valor en memoria usando el puntero
  printf("Valor dentro de pasarReferencia (despues de modificar): %d\n", *equis); // Imprime el valor modificado
}
