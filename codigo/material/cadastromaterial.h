#ifndef CADASTROMATERIAL_H_INCLUDED
#define CADASTROMATERIAL_H_INCLUDED
#include "material.h"
#include "plastico.h"
#include "oleo.h"
#include "metal.h"
#include "vidro.h"
#include "papel.h"
#include <map>
class CadastroMaterial {
protected:
    std::map <std::string, Material*> Materiais_cadastrados;
public:
    CadastroMaterial(){};
    void cadastrar_material ();
    void imprimir_materiais_cadastrados();
};

#endif
