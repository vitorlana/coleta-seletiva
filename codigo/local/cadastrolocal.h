#ifndef CADASTROLOCAL_H
#define CADASTROLOCAL_H

#include <iostream>
#include "local2.cpp"
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
