#include <stdio.h>
#include <stdlib.h>
##include <stdbool.h>

int int main(int argc, char const *argv[]) {
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);

  printf("Fecha: %d\n", dia, mes );

  bool entre_fechas = false;

  entre_fechas = (mes >= 3) && (mes <= 6);
  entre_fechas = entre_fechas || (mes >= 4 || mes <= 5);
  entre_fechas = entre_fechas || (mes >= 6 || dia <= 20);

  printf("%s\n", entre_fechas ? "verdadero" : "falso" );
  
  return 0;
}
