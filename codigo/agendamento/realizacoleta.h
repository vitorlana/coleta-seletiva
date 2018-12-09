#ifndef REALIZA_COLETA_H
#define REALIZA_COLETA_H

#include "coleta.h"
#include "agendacoleta.h"
#include "../usuario/pessoa.h"
#include "../usuario/cadastrousuario.h"
#include "../material/material.h"
#include "../material/cadastromaterial.h"
#include "../local/local.h"
#include "../local/cadastrolocal.h"
#include <vector>
#include <map>
#include <iostream>
#include <vector>

class Realiza_Coleta{
protected:

public:
    std::vector<Material*> vector_materiais;
    Realiza_Coleta(){};
    void Realizar_Coleta(std::vector<Coleta*>, Pessoa*, CadastroMaterial*);
    void Imprime_Coletas_Realizadas(std::vector<Coleta*>,Pessoa*);
    void Imprime_Coletas_ARealizar(std::vector<Coleta*>,Pessoa*);
    void Recebe_vector(CadastroMaterial *materiais, std::string);
    Coleta get_coleta(std::vector<Coleta*>, int);
};

#endif
