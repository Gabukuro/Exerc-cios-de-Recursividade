#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplica (int num, int vezes) {
  if (vezes == 0) {
    return 0;
  } else {
    return num + multiplica(num, vezes -1);
  }
}