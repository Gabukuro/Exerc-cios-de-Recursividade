#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include "potencia.h"
#include "multiplica.h"
#include "contaNum.h"
#include "hanoi.h"

int main(void) {

	setlocale(LC_ALL, "Portuguese");
  int resultado = 0;
  system("@cls || clear");
  int base = 7, expoente = 3;
  resultado = potencia(base, expoente);
  printf("====\tPotência\t\t====\n");
  printf("Resultado da potência, base %d expoente %d:\n%d\n\n", base, expoente, resultado);

  int num = 7, vezes = 3;
  resultado = multiplica(num, vezes);
  printf("====\tSoma Sucessiva\t====\n");
  printf("Resultado do número %d somado sucessivamente por %d vezes:\n%d\n\n", num, vezes, resultado);

  char numeros[] = "12343242377592384293", numeroProcurado[] = "4";
  int ultimaPosicao = strlen(numeros) -1, countNumero = 0;
  resultado = contaNum(numeroProcurado, numeros,ultimaPosicao,countNumero);
  printf("====\tConta Número\t====\n");
  printf("A quantidade de vezes que o número %s aparece no número %s é:\n%d\n\n", numeroProcurado, numeros, resultado);

  int quantidadeDiscos = 5;
  printf("====\tTorre de Hanoi\t====\n");
  torreHanoi(quantidadeDiscos, 'A', 'C', 'B');

  return 0;
}

