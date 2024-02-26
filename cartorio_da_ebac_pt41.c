#include <stdio.h> //biblioteca de comunicaçâo com o usuario
#include <stdlib.h> //biblioteca de alocaçâo de espaço em memória
#include <locale.h> //biblioteca de alocaçôes de textos por regiao
#include <string.h> //biblioteca responsavel por cuidar das string

int Registro() //função responsavél por cadastrar os usuário no sistema
{
	//início da criação de variáveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/strings
	
	printf("Digite o CPF a ser Cadastrado: "); //coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a strings
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores da string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //"fopen" abre o arquivo e o "w" significa escrever
	fprintf(file, cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espaço para organizar
	fclose(file); // fecha o arquivo nunca esquecer de fechar os arquivos 

	printf("Digite o nome a ser Cadastrado: "); //coletando dados do usuário
	scanf("%s",nome);//%s refere-se a strings 
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, nome); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espaço para organizar
	fclose(file); //fecha o arquivo
	
	printf("Digite o Sobrenome a ser Cadastrado: "); //coletando informação do usuário
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, sobrenome); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, ","); //espaço para organizar 
	fclose(file); //fecha o arquivo
	 
	printf("Digite o cargo a ser Cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a"); // "fopen" acessa o arquivo "a" atualiza o arquivo desejado
	fprintf(file, cargo);//salva o valor da variavel
	fclose(file);	//fecha o arquivo
	
	
}
int Consulta() //função responsavél por consultar os usuário no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    
    printf("Digite o CPF a ser consultado: "); //coletando informação do usuário
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
{
    printf("Não foi possivel abrir o arquivo, Não localizado!\n"); //dando informações ao usuário
}
    
    while(fgets(conteudo,200, file) != NULL)
{
    printf("\nEssas são as informações do usuário: "); //dando informações ao usuário
    printf("%s", conteudo);
	printf("\n\n");
	
}
    
    system("pause"); // responsável por congelar a tela  

}
int Deletar() //função responsavél por deletar os usuário no sistema.
{
	char cpf[40];
	
	printf("Digite o CPF  do usuário a ser Deletado: "); //coletando informação do usuário
	scanf("%s", cpf);
	
	remove(cpf); //"remove" remover 
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //"r" ler o arquivo
	
	if(file == NULL) //if
{
	printf("O usuário não se encontra no sistema!.\n"); //dando informações ao usuário
	system("pause"); // congela a tela 
	
	printf(" O usuário foi Deletado com sucesso!\n"); //dando informações ao usuário
    system("pause"); // responsável por congela a tela 
    
    system("cls");// responsável por limpar a tela
}
	
}  

    int main()
{
	int opcao=0; //definindo variáveis
	
	int laco=1; //
	
	for(laco=1;laco=1;)
{
	system("cls"); // responsável por limpa a tela 
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
	;printf("### Cartório da EBAC ### \n\n"); //inicio do menu
	//Inicio De Menus\n\n); 
	printf("Escolha a opçâo desejada no menu:\n\n"); //dando informações ao cliente "\t" espaço no começo de linhas
	printf("\t1 - Registrar nomes\n"); // opção de interação do menu
	printf("\t2 - Consultar nomes\n"); // opção de interação do menu
	printf("\t3 - Deletar nomes\n\n"); // opção de interação do menu
	printf("opção: "); //fim do menu

	
	scanf("%d", &opcao); //armazenando a escolha do usuário
	
	system("cls"); // responsável por limpa a tela 
	
	switch(opcao) //inicio da seleção do menu
{
		case 1://"case"= O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.
		Registro();// chamada de funções 
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execução do programa para o comando seguinte.
		
		case 2://"case"= O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.
		Consulta();// chamada de funções
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execução do programa para o comando seguinte.
		
		case 3://"case"= O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.
		Deletar();// chamada de funções
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execução do programa para o comando seguinte.
		
		default:
		printf("Essa opção não está dispónivel\n");
		system("pause");//responsável por pausar o menu.
		break; //O comando break encerra o loop atual, switch, ou o loop que foi informado no label e transfere o controle da execução do programa para o comando seguinte.
}       //fim da seleçao
}
}



	

	
