#include <stlib.h>
#include <stdio.h>

int  main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);

  if (x < y && y < z) 
   printf("Verdadero\n");
  else if (x > y && y > z)
   printf("Verdadero\n");
  else 
   printf("Falso\n");
  return 0;
  }
}
