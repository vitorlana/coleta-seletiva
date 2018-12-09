#ifndef AGENDA_COLETA_H
#define AGENDA_COLETA_H

#include "coleta.h"
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

class Agenda_Coleta{
protected:
        Pessoa *doador;
        CadastroMaterial *materiais;
        CadastroLocal *locais;
        CadastroUsuario *lista_usuarios;
public:
    Agenda_Coleta(){};
    Agenda_Coleta(Pessoa *doador, CadastroMaterial *materiais, CadastroLocal *locais, CadastroUsuario *lista_usuarios);
    std::vector<Material*> vector_materiais;
    std::vector<Coleta *> vec_coletas;
    void Imprime_dados();
    std::vector<Coleta *> get_vector();
    void Recebe_vector();
    void Realiza_Agendamento(Pessoa *doador,CadastroMaterial *materiais, CadastroLocal *locais, CadastroUsuario *lista_usuarios);

};

#endif
