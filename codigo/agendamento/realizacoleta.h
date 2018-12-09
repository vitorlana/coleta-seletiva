#ifndef REALIZA_COLETA_H
#define REALIZA_COLETA_H

#include "../usuario/pessoa.h"
#include "../material/material.h"
#include "../material/cadastromaterial.h"
#include "../local/local.h"
#include <vector>
#include <map>

class Realiza_Coleta{
protected:
    Pessoa *receptor;
    CadastroMaterial *materiais;
    Local *local_realizacao;
public:
    Realiza_Coleta(Pessoa *usuario_receptor);
    void Imprime_dados();
};

#endif
