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
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: \n");
	scanf("%f", &n2);
	
	switch(op){
		case 1:
			res = n1 + n2;
			printf("Soma: %.2f", res);
			break;
		case 2:
			res = n1 + n2;
			printf("Subtra��o: %.2f", res);
			break;
		case 3:
			res = n1 * n2;
			printf("Multiplica��o: %.2f", res);
			break;
		case 4:
			if(n2 != 0){
				res = n1 / n2;
				printf("Divis�o: %.2f", res);
			} else {
				printf("Divis�o por zero");
			}
			break;
		default:
			printf("N�o existe nenhum c�lculo com essa alternativa. Digite entre 1 e 4.");
			break;
	}
}
