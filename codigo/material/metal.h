#ifndef METAL_H_INCLUDED
#define METAL_H_INCLUDED

#include "material.h"

class Metal : public Material {
public:
    Metal (float quantidade_em_quilos, std::string breve_descricao, Pessoa* dono);
    virtual void modo_de_armazenamento() override;

};

#endif // METAL_H_INCLUDED
