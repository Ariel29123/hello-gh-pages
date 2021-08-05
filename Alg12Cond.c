#include <stdio.h>
#include <stdlib.h>

  int int main(int argc, char const *argv[]) {

   int n = atoi(argv[1])

   printf("Numero ingresado: %d"/n, n);

   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;
   printf("%d\n", n % 10 );
   n /=  10;

   printf("\n");

   return 0;
}
