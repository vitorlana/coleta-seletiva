#ifndef CADASTROMATERIAL_H_INCLUDED
#define CADASTROMATERIAL_H_INCLUDED
#include "material.h"
#include "plastico.h"
#include "ole.h"
#include "metal.h"
#include "vidro.h"
#include "papel.h"
#include <vector>
class CadastroMaterial {
protected:
    std::vector <Material*> Materiais_cadastrados;
};
void cadastrar_material ();
void imprimir_materiais_cadastrados();
#endif
