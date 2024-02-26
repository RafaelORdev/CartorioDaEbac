#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de textos por regiao
#include <string.h> //biblioteca responsavel por cuidar das string

int Registro() //fun��o responsav�l por cadastrar os usu�rio no sistema
{
	//in�cio da cria��o de vari�veis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/strings
	
	printf("Digite o CPF a ser Cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a strings
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores da string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //"fopen" abre o arquivo e o "w" significa escrever
	fprintf(file, cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espa�o para organizar
	fclose(file); // fecha o arquivo nunca esquecer de fechar os arquivos 

	printf("Digite o nome a ser Cadastrado: "); //coletando dados do usu�rio
	scanf("%s",nome);//%s refere-se a strings 
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, nome); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espa�o para organizar
	fclose(file); //fecha o arquivo
	
	printf("Digite o Sobrenome a ser Cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, sobrenome); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espa�o para organizar 
	fclose(file); //fecha o arquivo
	 
	printf("Digite o cargo a ser Cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, cargo);//salva o valor da variavel
	fclose(file);	//fecha o arquivo
	
	
}
int Consulta() //fun��o responsav�l por consultar os usu�rio no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    
    printf("Digite o CPF a ser consultado: "); //coletando informa��o do usu�rio
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
{
    printf("N�o foi possivel abrir o arquivo, N�o localizado!\n"); //dando informa��es ao usu�rio
}
    
    while(fgets(conteudo,200, file) != NULL)
{
    printf("\nEssas s�o as informa��es do usu�rio: "); //dando informa��es ao usu�rio
    printf("%s", conteudo);
	printf("\n\n");
	
}
    
    system("pause"); // respons�vel por congelar a tela  

}
int Deletar() //fun��o responsav�l por deletar os usu�rio no sistema.
{
	char cpf[40];
	
	printf("Digite o CPF  do usu�rio a ser Deletado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf);
	
	remove(cpf); //"remove" remover 
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //"r" ler o arquivo
	
	if(file == NULL) //if
{
	printf("O usu�rio n�o se encontra no sistema!.\n"); //dando informa��es ao usu�rio
	system("pause"); // congela a tela 
	
	printf(" O usu�rio foi Deletado com sucesso!\n"); //dando informa��es ao usu�rio
    system("pause"); // respons�vel por congela a tela 
    
    system("cls");// respons�vel por limpar a tela
}
	
}  

    int main()
{
	int opcao=0; //definindo vari�veis
	
	int laco=1; //
	
	for(laco=1;laco=1;)
{
	system("cls"); // respons�vel por limpa a tela 
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
	;printf("### Cart�rio da EBAC ### \n\n"); //inicio do menu
	//Inicio De Menus\n\n); 
	printf("Escolha a op��o desejada no menu:\n\n"); //dando informa��es ao cliente "\t" espa�o no come�o de linhas
	printf("\t1 - Registrar nomes\n"); // op��o de intera��o do menu
	printf("\t2 - Consultar nomes\n"); // op��o de intera��o do menu
	printf("\t3 - Deletar nomes\n\n"); // op��o de intera��o do menu
	printf("op��o: "); //fim do menu

	
	scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	system("cls"); // respons�vel por limpa a tela 
	
	switch(opcao) //inicio da sele��o do menu
{
		case 1://"case"= O conte�do de uma vari�vel � comparado com um valor constante, e caso a compara��o seja verdadeira, um determinado comando � executado.
		Registro();// chamada de fun��es 
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execu��o do programa para o comando seguinte.
		
		case 2://"case"= O conte�do de uma vari�vel � comparado com um valor constante, e caso a compara��o seja verdadeira, um determinado comando � executado.
		Consulta();// chamada de fun��es
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execu��o do programa para o comando seguinte.
		
		case 3://"case"= O conte�do de uma vari�vel � comparado com um valor constante, e caso a compara��o seja verdadeira, um determinado comando � executado.
		Deletar();// chamada de fun��es
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execu��o do programa para o comando seguinte.
		
		default:
		printf("Essa op��o n�o est� disp�nivel\n");
		system("pause");//respons�vel por pausar o menu.
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execu��o do programa para o comando seguinte.
}       //fim da sele�ao
}
}



	

	
