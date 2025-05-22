#include <stdio.h>  // biblioteca de comunicação com o usuário
#include <stdlib.h>  // biblioteca de alocação de espaço em memória
#include <locale.h>  //biblioteca de alocação de texto por região

int main ()
{
	int opcao=0;  //definindo variáveis
	
	setlocale (LC_ALL, "portuguese"); //definindo a linguagem
	
	printf ("### CARTÓRIO DA EBAC ###\n\n"); //inicio do menu
	printf ("ESCOLHA A OPÇÃO DESEJADA NO MENU:\n\n" );
	printf (" \t1 - REGISTRAR NOMES\n " );
	printf ("  \t2 - CONSULTAR NOMES\n " );
	printf ("   \t3 - DELETAR NOMES\n\n " ); 
	printf ("OPÇÃO: ");  //fim do menu
	
	scanf("%d" , &opcao); //armazenando a escolha do usuário
	
	system("cls");
	
	if(opcao==1) //inicio da seleção
	{
		printf("VOCÊ ESCOLHEU O REGISTRO DE NOMES!");
	}
	
	if(opcao==2)
	{
		printf("VOCÊ ESCOLHEU CONSULTAR NOMES!");
	}
	
	if(opcao==3)
	{
		printf("VOCÊ ESCOLHEU DELETAR NOMES!");
	}
	
	if(opcao>=4 || opcao<=0)
	
	{
	printf("ESSA OPÇÃO NÃO ESTA DISPONÍVEL");
	} //fim da seleção
	
	
}



















