#ifndef PAPEL_H_INCLUDED
#define PAPEL_H_INCLUDED
#include "material.h"

class Papel : public Material {
public:
    Papel (float quantidade_em_quilos, std::string breve_descricao);
    virtual void modo_de_armazenamento() override;

};

#endif // PAPEL_H_INCLUDED
