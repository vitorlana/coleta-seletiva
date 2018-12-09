#ifndef COLETA_H
#define COLETA_H

#include "../usuario/pessoa.h"
#include "../usuario/cadastrousuario.h"
#include "../material/material.h"
#include "../material/cadastromaterial.h"
#include "../local/local.h"
#include "../local/cadastrolocal.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>

class Coleta
{
protected:
    int posicao_vetor;
    std::string local_coleta;
    std::string doador;
    std::string receptor;
    bool Coleta_realizada;

public:
    Coleta(int posicao_vetor, std::string local_coleta, std::string doador, std::string receptor);
    void add_vector_coletas(Coleta *coleta);
    void set_coleta_realizada();
};

#endif
