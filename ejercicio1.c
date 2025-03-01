#include <stdio.h>

int main () {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';
  
  // Escribe el código para imprimir las direcciones de c, d y e
  printf("Direccion de c: %p\n", (void*)&c);
  printf("Direccion de d: %p\n", (void*)&d);
  printf("Direccion de e: %p\n", (void*)&e);

  // Imprime el carácter, el código ASCII y la dirección de memoria de cada uno
  ap = &c;
  printf("\nCaracter: %c\n", *ap);
  printf("Codigo ASCII: %d\n", *ap);
  printf("Direccion de memoria: %p\n", (void*)ap);

  ap = &d;
  printf("\nCaracter: %c\n", *ap);
  printf("Codigo ASCII: %d\n", *ap);
  printf("Direccion de memoria: %p\n", (void*)ap);

  ap = &e;
  printf("\nCaracter: %c\n", *ap);
  printf("Codigo ASCII: %d\n", *ap);
  printf("Direccion de memoria: %p\n", (void*)ap);

  return 0;
}
