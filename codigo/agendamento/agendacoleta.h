#ifndef AGENDA_COLETA_H
#define AGENDA_COLETA_H

#include "../usuario/pessoa.h"
#include "../material/material.h"
#include "../material/cadastromaterial.h"
#include "../local/local.h"
#include <vector>
#include <map>
#include <iostream>

class Agenda_Coleta{
protected:
        Pessoa *doador;
        CadastroMaterial *materiais;
        Local *local_realizacao;
public:
    Agenda_Coleta(Pessoa *doador, CadastroMaterial *materiais);
    std::vector<Material*> vector_materiais;
    void Imprime_dados();
    void Recebe_vector();
};

#endif
