#include <stdio.h>  // biblioteca de comunica��o com o usu�rio
#include <stdlib.h>  // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>  //biblioteca de aloca��o de texto por regi�o

int main ()
{
	int opcao=0;  //definindo vari�veis
	
	setlocale (LC_ALL, "portuguese"); //definindo a linguagem
	
	printf ("### CART�RIO DA EBAC ###\n\n"); //inicio do menu
	printf ("ESCOLHA A OP��O DESEJADA NO MENU:\n\n" );
	printf (" \t1 - REGISTRAR NOMES\n " );
	printf ("  \t2 - CONSULTAR NOMES\n " );
	printf ("   \t3 - DELETAR NOMES\n\n " ); 
	printf ("OP��O: ");  //fim do menu
	
	scanf("%d" , &opcao); //armazenando a escolha do usu�rio
	
	system("cls");
	
	if(opcao==1) //inicio da sele��o
	{
		printf("VOC� ESCOLHEU O REGISTRO DE NOMES!");
	}
	
	if(opcao==2)
	{
		printf("VOC� ESCOLHEU CONSULTAR NOMES!");
	}
	
	if(opcao==3)
	{
		printf("VOC� ESCOLHEU DELETAR NOMES!");
	}
	
	if(opcao>=4 || opcao<=0)
	
	{
	printf("ESSA OP��O N�O ESTA DISPON�VEL");
	} //fim da sele��o
	
	
}



















