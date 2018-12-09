#include "cadastrousuario.h"
#include <iomanip>

Pessoa * CadastroUsuario::login()
{
	std::string senhalogin;
	std::string nomelogin;
	int flag = 0;
	int opc;
	std::cout << std::endl;
	std::cout << "-- NOVO LOGIN DE USUARIO --" << std::endl;
	std::cout << std::endl;

	do {
		flag = 0;
		do {
			nomelogin.clear();
			senhalogin.clear();
			std::cout << "Insira seu nome de login: ";
			while (nomelogin.length() == 0)
				std::getline(std::cin, nomelogin);

			for (std::map<std::string, Pessoa*>::iterator it = _mapcadastro.begin(); it != _mapcadastro.end(); it++)
			{
				if (it->first == nomelogin)
					flag = 1;
			}

			if (flag == 0) {
				std::cout << "-->> LOGIN NAO ENCONTRADO <<--" << std::endl;
				std::cout << std::endl;
				std::cout << "DESEJA CADASTRAR ESSE USUARIO\n1 - SIM / 2 - NAO"  << "\n";
				std::cin >> opc;
				switch (opc)
				{
				case 1:
					CadastroUsuario::cadastro();
					break;
				case 2:
					CadastroUsuario::sair();
					break;
					//exit(0);
				}

			}
		} while (flag == 0);

		std::cout << "Senha: ";
		while (senhalogin.length() == 0)
			std::getline(std::cin, senhalogin);

		if ((_mapcadastro.find(nomelogin)->second->get_senha()) != senhalogin) {
			std::cout << "-->> SENHA INCORRETA <<--" << std::endl;
			std::cout << std::endl;
		}
	} while ((_mapcadastro.find(nomelogin)->second->get_senha()) != senhalogin);

	system("cls||clear");

	std::cout << std::endl;
	std::cout << "-- LOGIN REALIZADO COM SUCESSO! --" << std::endl;
	std::cout << std::endl;

	pessoa_logada = _mapcadastro.find(nomelogin)->second;
	return _mapcadastro.find(nomelogin)->second;
}

void CadastroUsuario::cadastro()
{
	std::string senhausuario;
	std::string senhausuarioconf;
	std::string nomeusuario;
    system("cls||clear");
	std::cout << std::endl;
	std::cout << "CADASTRO DE NOVO USUARIO" << std::endl;
	std::cout << std::endl;

	std::cout << "Insira o seu nome de cadastro: ";
	while (nomeusuario.length() == 0)
		std::getline(std::cin, nomeusuario);

	do {
		senhausuario.clear();
		senhausuarioconf.clear();

		std::cout << "Insira a sua senha: ";
		while (senhausuario.length() == 0)
			std::getline(std::cin, senhausuario);

		std::cout << "Confirme: ";
		while (senhausuarioconf.length() == 0)
			std::getline(std::cin, senhausuarioconf);

		if (senhausuario != senhausuarioconf) {
			std::cout << "SENHAS DIFERENTES!" << std::endl;
			std::cout << std::endl;
		}
	} while (senhausuario != senhausuarioconf);

	std::string endereco;
	std::cout << "Insira o seu endereco: ";
	while (endereco.length() == 0)
		std::getline(std::cin, endereco);
	std::cout << std::endl;

	int interesse;
	do {

		std::cout << "Selecione o seu interesse material a ser depositado" << std::endl;
		std::cout << "1 para Papel" << std::endl;
		std::cout << "2 para Vidro" << std::endl;
		std::cout << "3 para Plastico" << std::endl;
		std::cout << "4 para Organico" << std::endl;
		std::cout << "5 para Outros" << std::endl;
		std::cout << "Insert: ";
		std::cin >> interesse;

		if ((interesse > 5) | (interesse < 1)) {
			std::cout << "INTERESSE INVALIDO" << std::endl;
			std::cout << std::endl;
		}
	} while ((interesse > 5) | (interesse < 1));

	std::cout << std::endl;

	int tipo;
	do {
		std::cout << "Selecione o seu interesse material a ser depositado" << std::endl;
		std::cout << "1 para Receptor" << std::endl;
		std::cout << "2 para Doador" << std::endl;
		std::cout << "Insert: ";
		std::cin >> tipo;

		if ((tipo > 3) | (tipo < 1)) {
			std::cout << "TIPO INVALIDO" << std::endl;
			std::cout << std::endl;
		}
	} while ((tipo > 3) | (tipo < 1));

	std::cout << std::endl;

	int telefone;
	do {
		std::cout << "Insira seu telefone no formato '12345678' : ";
		std::cin >> telefone;

		if (std::to_string(telefone).length() != 8) {
			std::cout << "FORMATO INVALIDO" << std::endl;
			std::cout << std::endl;
		}

	} while (std::to_string(telefone).length() != 8);

	Pessoa * newusuario = new Pessoa(nomeusuario, senhausuario, endereco, interesse, tipo, telefone);

	_mapcadastro[newusuario->get_nome()] = newusuario;
	system("cls||clear");
	std::cout << "-> CADASTRO REALIZADO COM SUCESSO, " << newusuario->get_nome() << "!" << std::endl;
	std::cout << std::endl;
}

bool CadastroUsuario::find(std::string nomelogin)
{
	for (std::map<std::string, Pessoa*>::iterator it = _mapcadastro.begin(); it != _mapcadastro.end(); it++)
	{
		if (it->first == nomelogin) {
			return true;
		}
	}
	return false;
}

void CadastroUsuario::imprimepessoas()
{
	int count=0;

	std::cout << "Listagem de todos os usuarios cadastrados: " << std::endl;

	for (std::map<std::string, Pessoa*>::iterator it = _mapcadastro.begin(); it != _mapcadastro.end(); it++)
	{
		std::cout << "Usuario" << count << ": " << it->second->get_nome() << ", do tipo " << it->second->get_tipostring() << std::endl;
		count++;
	}
	std::cout << std::endl;
}

void CadastroUsuario::sair(){
	return;
}
