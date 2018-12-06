#include "cadastrousuario.h"
#include "pessoa.h"
#include "cadastrolocal.h"
#include <string>
#include <iostream>

void FindUsuario(CadastroUsuario* NovoCadastroUsuario) {
	std::cout << "Insira um nome a ser buscado dentre os usuarios: ";

	std::string usuariofind;

	while (usuariofind.length() == 0)
		std::getline(std::cin, usuariofind);

	std::cout << "TESTE DE EXISTENCIA DE USUARIO '" << usuariofind << "' = ";
	
	if (NovoCadastroUsuario->find(usuariofind))
		std::cout << "ENCONTRADO" << std::endl;
	else
		std::cout << "NAO CADASTRADO" << std::endl;
}

int main(){
	CadastroUsuario NovoCadastroUsuario = CadastroUsuario();
	
	int numcadastros;
	
	std::cout << "Insira o numero de cadastros de pessoas a serem realizados para o teste: ";
	std::cin >> numcadastros;

	if (numcadastros > 0) {
		for (int i = 1; i <= numcadastros; i++)
			NovoCadastroUsuario.cadastro();

		NovoCadastroUsuario.imprimepessoas();

		FindUsuario(&NovoCadastroUsuario);
		FindUsuario(&NovoCadastroUsuario);

		Pessoa *usuario = NovoCadastroUsuario.login();

		std::cout << std::endl;
		std::cout << "** PERFIL DE USUARIO **" << std::endl;
		std::cout << "Nome: " << usuario->get_nome() << std::endl;
		std::cout << "Tipo: " << usuario->get_tipostring() << std::endl;
		std::cout << "Interesse: " << usuario->get_interessestring() << std::endl;
		std::cout << "Endereco: " << usuario->get_endereco() << std::endl;
		std::cout << "Telefone: " << usuario->get_telefone() << std::endl;
		std::cout << std::endl;
	}

	CadastroLocal NovoLocal = CadastroLocal();

	numcadastros = 0;
	std::cout << "Insira o numero de cadastros de locais a serem realizados para o teste: ";
	std::cin >> numcadastros;

	if (numcadastros > 0) {
		for (int i = 1; i <= numcadastros; i++)
			NovoLocal.cadastro();

		std::cout << "Ponto de encontro escolhido foi: " << NovoLocal.escolheponto() << std::endl;
	}
	return 0;
}