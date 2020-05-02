#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int contaNum (char numeroProcurado[], char numeros[], int ultimaPosicao, int countNumero) {
  if(numeroProcurado[0] == numeros[ultimaPosicao]) {
    countNumero++;
  }

  if(ultimaPosicao == 0){
    return countNumero;
  } else {
    return contaNum(numeroProcurado, numeros, ultimaPosicao -1 , countNumero);
  }
}