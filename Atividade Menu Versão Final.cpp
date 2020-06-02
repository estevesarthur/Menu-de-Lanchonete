#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <conio.h>

// Realizado pelos alunos da turma de DS 1Q: Arthur Martins - arthur.martins7@etec.sp.gov.br e Alonso Benicio - alonso.benicio@etec.sp.gov.br

 int main()
{
    setlocale(LC_ALL,"portuguese");

	int erro = 0;
	char menu,sb1,sb2,sb3;
	float qtd,valor;
	while (true){
		
		printf("Bem vindo ao DEVBURGUER\nAproveitem nossos lanches maravilhosos,\nnossas bebidas e acompanhamentos!!! :D\n");
		printf("Escolha uma das opções do nosso cardápio.\n\n");
		printf("1 - Acompanhamentos \n2 - Lanches\n3 - Bebidas \n4 - Fechar a Conta\n\n");
	    scanf("%c", &menu);
	    fflush(stdin);

		switch (menu){
    		case '1':
    			system("cls");
        		printf("Escolha um de nossos deliciosos Acompanhamentos!!!\n\n");
				printf("1 - Batata Frita - R$10,00 \n2 - Batata Frita com cheddar - R$12,00 \n3 - Batata Frita com bacon - R$12,00 \n4 - Batata Frita com cheddar e bacon - R$15,00\n\n");
        		scanf("%c", &sb1);
				fflush(stdin);
				printf("Quantas porções você deseja: ");
		        scanf("%f",&qtd);
		        fflush(stdin);

				switch (sb1){
					case '1':
						valor = valor + qtd * 10.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
	             	case '2':
			        	valor = valor + qtd * 12.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
			    	case '3':
			        	valor = valor + qtd * 12.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
			        case '4':
			        	valor = valor + qtd * 15.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
			        default:
			        	printf("Você deve escolher um produto válido. Tente novamente!\n");
			        	erro = 1;
					}break;
					
    		case '2':
    			system("cls");
        		printf("Você selecionou os nossos Lanches Matadores. :P\n\n");
        		printf("Todos nossos Lanches Matadores vem com pão de hamburguer normal, maionese, queijo, presunto, alface e tomate.\n\n");
				printf("1 - X-Edson (hamburguer bovino de 210g e calabresa ) - R$ 32,00 \n2 - X-Valter (hamburguer bovino com pimenta calabresa de 210g e muito bacon) - R$ 42,00\n");
				printf("3 - X-Quitéria (hamburguer bovino de 210g) - R$ 28,00 \n4 - X-Guilherme (hamburguer de soja de 210g) - R$ 35,00 \n5 - X-Fátima (hamburguer de carneiro de 210g com molhor barbecue) - R$ 48,00 \n6 - X-Rafael (hamburgue de frango de 210g e rodela de abacaxi) - R$ 38,00\n\n");
        		scanf("%c", &sb2);
				fflush(stdin);
				printf("Quantos lanches você deseja: ");
		        scanf("%f",&qtd);
		        fflush(stdin);
				
				switch (sb2){
					case '1':
						valor = valor + qtd * 32.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
				   	case '2':
				       	valor = valor + qtd * 42.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
				    case '3':
				       	valor = valor + qtd * 28.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
				    case '4':
				       	valor = valor + qtd * 35.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
					case '5':
				       	valor = valor + qtd * 48.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
					case '6':
				       	valor = valor + qtd * 38.00;
	             		printf("Subtotal é R$ %2.f\n", valor);break;
				    default:
				      	printf("Você deve escolher um produto válido. Tente novamente!\n");
				       	erro = 1;
					}break;
   			case '3':
   				system("cls");
        		printf("Que sede! O que vamos beber hoje?.\n\n");
        		printf("1 - Água mineral 500ml - R$ 3,50 \n2 - Coca-Cola 350ml - R$ 5,00 \n3 - Sucos Sabores 500ml - R$ 4,50\n4 - Guaraná 350ml - R$ 5,00\n\n");
				scanf("%c", &sb3);
				fflush(stdin);
				printf("Qual a quantidade de Bebidas? ");
				scanf("%f",qtd);
				fflush(stdin);
				
				switch (sb3){
					case '1':
						valor = valor + qtd * 3.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
					case '2':
						valor = valor + qtd * 5.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
					case '3':
						valor = valor + qtd * 4.50;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
					case '4':
						valor = valor + qtd * 5.00;
	             		printf("Subtotal é R$ %2.f\n\n", valor);break;
				}break;
    		case '4':
    			system("cls");
        		printf("O valor total é R$ %2.f\n\n", valor);break;
          	default:
        		printf("Você deve escolher um produto válido. Tente novamente!\n");
        		erro = 1;
   		}
   }
   	system("pause");
}
