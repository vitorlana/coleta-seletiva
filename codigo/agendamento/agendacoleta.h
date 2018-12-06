#ifndef AGENDA_COLETA_H
#define AGENDA_COLETA_H

#include "../usuario/pessoa.h"
//#include "../material/material.h"
//#include "../local/local.h"

class Agenda_Coleta{
protected:
        Pessoa *doador;
        //Material material_doado;
        //Local local_realizacao;
public:
    Agenda_Coleta(Pessoa *usuario_doador);
    void Imprime_dados();
};

#endif
