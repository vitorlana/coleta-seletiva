#ifndef REALIZA_COLETA_H
#define REALIZA_COLETA_H

#include "../usuario/pessoa.h"
//#include "../material/material.h"
//#include "../local/local.h"

class Realiza_Coleta{
protected:
        Pessoa *usuario_receptor;
        //Material material_recebido;
        //Local local_realizacao;
public:
    Realiza_Coleta(Pessoa *usuario_receptor);
    void Imprime_dados();
};

#endif
