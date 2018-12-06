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
private:
	std::vector<Local*> _locaisvector;
};

#endif
