#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese");
	
	//Inicio das variaveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //Coletor de informa��o
	scanf("%s", cpf); 
	
	strcpy(arquivo, cpf); //Responsavel por criar os valores das string
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecha arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo do cadastrado:  ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ".");
	fclose(file);
	
	system("pause");
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[300];
	
	printf("Digite o CPF a ser consultado:  ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Usuario n�o encontrado \n");
	}
	
	while(fgets(conteudo, 300, file) != NULL)
	{
		printf("Essas s�o as inforam��es do usu�rio:   ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
	
	} 

int deletar()
{
	printf("Deletar nomes \n");
	system("pause");
}

int main()
   {
	int opcao=0; //definindo as variaveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	printf("### Cart�rio da EBAC ###\n\n");
	printf("Login de ADM!\n\n Digite sua senha: ");
	scanf("%s", senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
	
	
	for(laco=1;laco=1;)
		{ //inicio do la�o
	
			system("cls");	
				
       	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	 
	   	 	printf("#### Cart�rio da EBAC ####\n\n"); //inicio do menu
	    	printf("Escolha a op��o desejada do menu: \n\n"); 
	    	printf("\t1 - Registrar nomes\n");
	   	 	printf("\t2 - Consultar nomes\n");
	   	 	printf("\t3 - Deletar nomes\n\n");	
	   	 	printf("\t4 - Sair do sistema\n\n");
		    printf("Op��o:"); //final do menu
		 
	
	    	scanf("%d", &opcao); //armanezando a escolha do usuario
	
	    	system("cls");
	    
	    	switch(opcao)
			{
				case 1:
			 registro();	
			 break;
			  
			  case 2:
			 consultar();
			 break;	
			 
			 case 3:
			 deletar();
			 break;
			 
			 case 4:
			 printf("Obrigado por utilzar o sistema!\n");
			 return 0;
			 break;	
			 
			
			 default:
			 printf ("Essa op��o s� estara disponivel depois do mundial do Palmeiras \n");
			 system("pause");
			 break; 	
			}
		int deletar()	
		{
	    char cpf[40];
	    
	    printf("Digite o CPF que deseja deletar");
	    scanf("%s", cpf);
	    
	    remove(cpf);
	    
	    FILE *file;
	    file = fopen(cpf,"r");
	    
	    if(file == NULL)
	    {
	    	printf("O usuario n�o existe \n");
	    	system("pause");
		}
		}

		} //final do la�o
	}

	else
		printf("Senha incorreta");

}
