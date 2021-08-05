#include <stdio.h>
#include <stdlib.h>

  int int main(int argc, char const *argv[]) {
    printf("Cantidad de args:%\d", argc );
  int max = 0;

    for (int i = 1; i < argc; i++) {
      if (atoi[i] > max) {
       max = atoi(argv[i])
      }
    printf("El maximo es: %d\n", max);  
}
