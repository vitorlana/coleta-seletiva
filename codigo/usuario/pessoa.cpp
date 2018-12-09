#include "pessoa.h"

Pessoa::Pessoa(std::string name, std::string senha, std::string endereco, int valorinteresse, int valortipo, unsigned int telefone)
{
	this->set_nome(name);
	this->set_senha(senha);
	this->set_endereco(endereco);
	this->set_interessevalor(valorinteresse);
	this->set_tipovalor(valortipo);
	this->set_telefone(telefone);
}

std::string Pessoa::get_nome()
{
	return _nome;
}

std::string Pessoa::get_senha()
{
	return _senha;
}

std::string Pessoa::get_endereco()
{
	return _endereco;
}

std::string Pessoa::get_tipostring()
{
	return _tipoS;
}

int Pessoa::get_tipovalor()
{
	return _tipoV;
}

std::string Pessoa::get_interessestring()
{
	return _interesseS;
}

int Pessoa::get_interessevalor()
{
	return _interesseV;
}

unsigned int Pessoa::get_telefone()
{
	return _telefone;
}

void Pessoa::set_interessestring(std::string interesseS)
{
	_interesseS = interesseS;

	if (interesseS == "Papel")
		_interesseV = 1;
	else if (interesseS == "Vidro")
		_interesseV = 2;
	else if (interesseS == "Plastico")
		_interesseV = 3;
	else if (interesseS == "Organico")
		_interesseV = 4;
	else if (interesseS == "Outros")
		_interesseV = 5;
	else
		std::cout << "ERROR SET INTERESSE" << std::endl;
}

void Pessoa::set_interessevalor(int interesseV)
{
	_interesseV = interesseV;

	switch (interesseV)
	{
	default:
		std::cout << "ERROR SET INTERESSE" << std::endl;
	case 1:
		_interesseS = "Papel";
		break;
	case 2:
		_interesseS = "Vidro";
		break;
	case 3:
		_interesseS = "Plastico";
		break;
	case 4:
		_interesseS = "Organico";
		break;
	case 5:
		_interesseS = "Outros";
		break;

		break;
	}
}

void Pessoa::set_tipostring(std::string tipostring)
{
	_tipoS = tipostring;

	if (_tipoS == "Receptor")
		_tipoV = 1;
	else if (_tipoS == "Doador")
		_tipoV = 2;
	else
		std::cout << "ERROR SET TIPO" << std::endl;
}

void Pessoa::set_tipovalor(int tipovalor)
{
	_tipoV = tipovalor;

	switch (tipovalor)
	{
	default:
		std::cout << "ERROR SET INTERESSE" << std::endl;
		break;
	case 1:
		_tipoS = "Receptor";
		break;
	case 2:
		_tipoS = "Doador";
		break;
	}
}

void Pessoa::set_endereco(std::string endereco)
{
	_endereco = endereco;
}

void Pessoa::set_telefone(unsigned int telefone)
{
	_telefone = telefone;
}

void Pessoa::set_senha(std::string senha)
{
	_senha = senha;
}

void Pessoa::set_nome(std::string nome)
{
	_nome = nome;
}
