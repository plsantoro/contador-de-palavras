/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {
	char letra1=0, letra2=0;
	int n = 0, c_especial = 0; 

	
	while (letra1 != '\n') {	/*Loop para leitura da frase*/
    
		scanf("%c", &letra1);
    
		if(letra1>=32 && letra1<=47){ 
   			c_especial=1;	/*flag ativa para caractere especial*/
     		}
		
		///mais uma palavra se o letra1 eh letra ou numero e letra2 pontuacao
		else if(((c_especial==1) && (letra1 <= 122 && letra1 >= 65)) && (!((letra1>=48 && letra1<=57) && (letra2 == '.' ||  letra2 == ',')))){
        		n++;
      			c_especial = 0;
      		}
		
		else{
       			c_especial = 0; /// caso de float
     		}

    		letra2 = letra1; //salva caracter anterior para comparacao na proxima iteracao

	}
	
	n++;
  
	printf("%d\n", n); //imprime o valor n de palavras da frase

	return 0;
}
