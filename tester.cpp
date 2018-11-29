#include "doctest.h"
#include "cadastrousuario.h"
#include "pessoa.h"
#include "cadastrolocal.h"

TEST_CASE("Teste Geral de Funcionamento (Black-Box)") {
	CadastroUsuario NovoCadastroUsuario = CadastroUsuario();				//Instanciando classe cadastro de pessoas [deve ocorrer na main]
																			//Esta armazena todas as pessoas cadastradas (Vector de classe Pessoa)
	NovoCadastroUsuario.cadastro("Daniel", "system");						
	NovoCadastroUsuario.cadastro("Lana", "eng");
	NovoCadastroUsuario.cadastro("Luciano", "senha");						//Simulado um novo cadastro de pessoa (no programa real será inserido via imput usuario (cin)

	NovoCadastroUsuario.imprime();											//Printa na tela todas as pessoas cadastradas

	Pessoa *usuario = NovoCadastroUsuario.login("Daniel", "system");		//Funcão utilizada para a realização do login a partir da senha cadastrada
																			//Senhas invalidas ficam em loop ate que insira uma correta (gera exceção caso ocorra 3x)
	CHECK_EQ(usuario->get_nome(), "Daniel");								

	usuario->set_interessevalor(3);											//Interesses e Tipos de pessoas podem ser lidos através de string e/ou valor (int)
	CHECK_EQ(usuario->get_interessestring(), "Plastico");					//.1 = Interesse em "Papel"
	CHECK_EQ(usuario->get_interessevalor(), 3);								//.2 = Interesse em "Vidro"
	usuario->set_interessestring("Vidro");									//.3 = Interesse em "Plastico"
	CHECK_EQ(usuario->get_interessestring(), "Vidro");						//.4 = Interesse em "Organico"
	CHECK_EQ(usuario->get_interessevalor(), 2);								//.5 = Interesse em "Outros"

	usuario->set_endereco("UFMG");											
	CHECK_EQ(usuario->get_endereco(), "UFMG");								//Retorna endereço por meio de uma unica string

	usuario->set_telefone(11112222);
	CHECK_EQ(usuario->get_telefone(), 11112222);							//Valor do tipo unsigned int

	usuario->set_tipovalor(3);												//.1 Tipo "Receptor"
	CHECK_EQ(usuario->get_tipostring(), "Doador/Receptor");					//.2 Tipo "Doador"
	CHECK_EQ(usuario->get_tipovalor(), 3);									//.3 Tipo "Doador/Receptor"
	usuario->set_tipostring("Doador");
	CHECK_EQ(usuario->get_tipostring(), "Doador");
	CHECK_EQ(usuario->get_tipovalor(), 2);

	CHECK(NovoCadastroUsuario.find("Lana"));								//Procura um nome especifico no vector de todas as pessoas cadastradas
	CHECK_EQ(NovoCadastroUsuario.find("Alex"), false);						//Retorno em booleano (True, caso encontrada, ou False)


	CadastroLocal PontoDeColeta = CadastroLocal(&NovoCadastroUsuario);		//Cadastro de um novo local, onde realiza-se login atraves da classe CadastroUsuario
	PontoDeColeta.cadastro("Av Antonio Carlos");							//Passagem ocorre por meio de referencia
																			//Deve-se chamar no inicio do codigo CadastroUsuari->login("xxx", "yyy"), como mostrado no incio
	PontoDeColeta.cadastro("Eldorado");
	PontoDeColeta.cadastro("Centro");

	CHECK_EQ(PontoDeColeta.escolheponto(2), "Eldorado");					//É listado para o usuario todos os pontos cadastrados e este o seleciona por meio de valor
																			//A escolha durante o tempo de execução também sera feita por 'std::cin', 
																			//como no cadastro pessoa e login, mas é usada passagem de parametro para realização dos testes
}																			