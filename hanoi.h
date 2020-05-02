#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void torreHanoi(int quantidadeDiscos , char origemDisco, char destinoDisco, char auxiliar){

	if(quantidadeDiscos == 1){
		printf("\n-----------------------------------\n"); 
		printf("Mova o disco 1 DA base %c PARA a base %c", origemDisco, destinoDisco);
		return;
	}
	
	torreHanoi(quantidadeDiscos - 1, origemDisco, auxiliar, destinoDisco);

	printf("\n-----------------------------------\n"); 
	printf("Mova o disco %d DA base %c para a base %c", quantidadeDiscos, origemDisco, destinoDisco);
	torreHanoi(quantidadeDiscos - 1, auxiliar, destinoDisco, origemDisco);
}
