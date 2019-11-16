#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float soma (float a, float b){	
	return a + b;	
}


float subtracao (float a, float b){	
	return a - b;	
}

float vezes (float a, float b){	
	return a * b;
}

float divisao (float a, float b){	
	return a / b;
}


int main(int argc, char *argv[]) {
	
setlocale(LC_ALL, "Portuguese");

char condicao,condicao2;
int condicao3;

float valor1, valor2,valor3, operador, resultado,resultado2,resultado3;

printf("Digite o primeiro valor:\n");
scanf("%f",&valor1);

system("cls");

printf("####Operador####\n");
printf("+|Adição|\t\n");
printf("-|subtração|\n");
printf("*|multiplicação|\n");
printf("/|divisão|\n");
printf("=|resultado\n");
printf("____________________________________________________________\n");

printf("valor:\t%f\n",valor1);

//scanf("%s", condicao);
printf("Operador: ");
condicao=getchar();
condicao=getchar();

switch (condicao){
case '+':
		printf("valor:\t");
		scanf("%f",&valor2);

		resultado = soma(valor1, valor2);
		//printf("=%f\n",resultado);
	
		break;
	case '-':
		
		
		printf("valor:\t");		
		//printf("Digite o segundo valor:\n");
		scanf("%f\n",&valor2);

		resultado = subtracao(valor1, valor2);
	 	//printf("=%f\n",resultado);
		
		break;
	case '*':
		
	
		printf("valor:\t");
		
		scanf("%f",&valor2);
		
		resultado = vezes(valor1, valor2);
		break;
	case '/':
		printf("valor:\t");
		//printf("Digite o segundo valor:\n");
		scanf("%f",&valor2);

		if(valor2 !=0)
		{
		resultado = divisao(valor1, valor2);
		//printf("=%f\n",resultado);
	
		}
		else{
			
			printf("impossível dividir por 0");
			
		}
		break;

	default:
	
	printf("erro\n");
}


	
while (condicao3 != 2){

	printf("Operador:");
	condicao2=getchar();
	condicao2=getchar();
	//scanf("%s", condicao2);


	switch (condicao2){
		case '+':
			printf("valor:\t");
			scanf("%f",&valor3);
			resultado2 = soma(resultado,valor3);
		    //printf("=%f\n",resultado2);
		    resultado=resultado2;


			break;
		case '-':
		    printf("valor:\t");
			scanf("%f",&valor3);
			resultado2 = subtracao(resultado,valor3);
			//printf("=%f\n",resultado2);
			resultado=resultado2;

			break;
		case '*':
			printf("valor:\t");
			scanf("%f",&valor3);
			resultado2 = vezes(resultado,valor3);
			//printf("=%f\n",resultado2);
			resultado=resultado2;

			break;
		case '/':
			printf("valor:\t");
			scanf("%f",&valor3);

			if(valor3 !=0)
			{
			resultado2 = divisao(resultado,valor3);
			resultado=resultado2;


			}
			else{

				printf("impossível dividir por 0\n\n");

			}

			break;
		case '=':


				printf("___________\n%f\n\n",resultado);
				condicao3 = 2;

			break;

		default:

		printf("erro\n");

	}

}
	return 0;
}
