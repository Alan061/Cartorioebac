#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h>//bibilioteca respons�vel por cuidar das string

int registro()
{
    char arquivo[40];
	char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
	
	printf("Digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por criar os valores das string
	
	FILE *file; // Cria o arquivo
	file = fopen(arquivo, "w"); // Cria o arquivo
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
	fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linaguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("s%",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usuario: ");
		printf("s%", conteudo);
		printf("\n\n");	
	}
	
	system("pause");
	
		
}
int deletar()
{
    printf("Vo�� escolheu deletar os nomes!\n");
    system("pause");	
}

int main()
{
    int opcao=0; //Definindo as vari�veis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
    	
    	system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linaguagem
	
	    printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n\n"); 
	    printf("Op��o: "); //Fim do menu
    
        scanf("%d", &opcao); //Armazendo a escolha do usu�rio
    
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
        	
        	default: 
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;
			
		}
        
        
    }
}
