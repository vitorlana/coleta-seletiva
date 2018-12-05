#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

class Pessoa{
public:
	Pessoa(std::string name, std::string senha, std::string endereco, int valorinteresse, int valortipo, unsigned int telefone);
	std::string get_nome();
	std::string get_endereco();
	std::string get_tipostring();
	std::string get_senha();
	int get_tipovalor();
	std::string get_interessestring();
	int get_interessevalor();
	unsigned int get_telefone();
	
	void set_interessestring(std::string);
	void set_interessevalor(int);
	void set_tipostring(std::string);
	void set_tipovalor(int);
	void set_endereco(std::string);
	void set_telefone(unsigned int);

private:
	void set_senha(std::string);
	void set_nome(std::string);

	std::string _nome;
	std::string _senha;
	std::string _endereco;
	std::string _tipoS;
	std::string _interesseS;
	int _tipoV;
	int _interesseV;
	unsigned int _telefone;
};

#endif

