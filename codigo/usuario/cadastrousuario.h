#ifndef CADASTROPESSOA_H
#define CADASTROPESSOA_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "pessoa.h"

class CadastroUsuario
{
public:
	CadastroUsuario() {};
	Pessoa* login();
	void cadastro();
	bool find(std::string);
	void imprimepessoas();
private:
	std::map<std::string, Pessoa*> _mapcadastro;
};

#endif
