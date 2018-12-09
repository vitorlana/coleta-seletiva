#ifndef CADASTROLOCAL_H
#define CADASTROLOCAL_H

#include <iostream>
#include "local.h"
#include <string>
#include <vector>

class CadastroLocal
{
public:
	CadastroLocal() {};
	void cadastro();
	std::string escolheponto();
	int retorna_tag_ponto();
	void imprime_locais();
	void excluir_local();
private:
	std::vector<Local*> _locaisvector;
};

#endif
