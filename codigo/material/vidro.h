#ifndef VIDRO_H_INCLUDED
#define VIDRO_H_INCLUDED
#include "material.h"


class Vidro : public Material {
public:
    Vidro (float quantidade_em_quilos, std::string breve_descricao);
    void modo_de_armazenamento() override;

};

#endif // VIDRO_H_INCLUDED
