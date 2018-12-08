#ifndef OLEO_H_INCLUDED
#define OLEO_H_INCLUDED
#include "material.h"
class Oleo: public Material {
public:
    Oleo (float quantidade_em_quilos, std::string breve_descricao, Pessoa* dono);
    virtual void modo_de_armazenamento() override;

};


#endif // OLEO_H_INCLUDED
