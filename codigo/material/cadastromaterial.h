#ifndef CADASTROMATERIAL_H_INCLUDED
#define CADASTROMATERIAL_H_INCLUDED
#include "material.h"
#include "plastico.h"
#include "oleo.h"
#include "metal.h"
#include "vidro.h"
#include "papel.h"
#include <vector>
#include <map>
class CadastroMaterial {
protected:
    std::vector <Material*> Materiais_cadastrados;
    std::map <std::string, std::vector <Material*> > Mapadonos;
public:
    CadastroMaterial(){};
    void cadastrar_material (Pessoa* usuario_logado);
    void imprimir_materiais_cadastrados(Pessoa* usuario_logado);
    void excluirmaterial(int posicao, Pessoa* usuario_logado);
    std::vector<Material*> retorna_materiais(Pessoa *usuario_logado);
    std::vector<Material*> vector_materiais;
};

#endif
