#ifndef PLASTICO_H_INCLUDED
#define PLASTICO_H_INCLUDED
#include "material.h"

class Plastico : public Material {
public:
    Plastico (float quantidade_em_quilos, std::string breve_descricao);
    virtual void modo_de_armazenamento() override;

};

#endif // PLASTICO_H_INCLUDED
