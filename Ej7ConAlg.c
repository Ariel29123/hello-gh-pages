#include <stlib.h>
#include <stdio.h>

int  main(void) {
  double n = 1;
  while (n <= 128) {
    double ln_n = log(n);
    double n_ln_n = n * log(n);
    double n2 = n * n;
    printf("%.2f\t%.2f\t%.2f\t%.2f\n", n,ln_n, n_ln_n, n2);
    n *= 2;
  }
  return 0;
}
