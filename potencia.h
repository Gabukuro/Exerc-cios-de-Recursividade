#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int potencia(int base, int expoente) {
  if (expoente == 0 ) {
    return 1;
  } else {
    return base *potencia(base, expoente -1);
  }
}
