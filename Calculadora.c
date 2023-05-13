#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	float n1, n2 , res;
	
	printf("Digite 1 para somar;\n");
	printf("Digite 2 para subtrair;\n");
	printf("Digite 3 para multiplicar;\n");
	printf("Digite 4 para dividir;\n");
	scanf("%d", &op);
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &n1);
	printf("Digite o segundo número: \n");
	scanf("%f", &n2);
	
	switch(op){
		case 1:
			res = n1 + n2;
			printf("Soma: %.2f", res);
			break;
		case 2:
			res = n1 + n2;
			printf("Subtração: %.2f", res);
			break;
		case 3:
			res = n1 * n2;
			printf("Multiplicação: %.2f", res);
			break;
		case 4:
			if(n2 != 0){
				res = n1 / n2;
				printf("Divisão: %.2f", res);
			} else {
				printf("Divisão por zero");
			}
			break;
		default:
			printf("Não existe nenhum cálculo com essa alternativa. Digite entre 1 e 4.");
			break;
	}
}
