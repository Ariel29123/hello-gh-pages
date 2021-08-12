#include <stlib.h>
#include <stdio.h>
#include <limits.h>

int  main(argc, char *argv[]) {
  int max = INT_MIN;
  for (int i = 1; i < argc; i++){
    int n = atoi(argv[i]);
    if (n > max) max = n; 
    }
  printf("el maximo es: %d\n", max );
  return 0;
}
