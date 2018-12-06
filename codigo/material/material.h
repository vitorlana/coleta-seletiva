#ifndef MATERIAL_H_INCLUDED
#define MATERIAL_H_INCLUDED
#include <iostream>
#include <string>
#include "..\usuario\pessoa.h"
class Material {
protected:
    std::string nome;
    float quantidade_em_quilos;
    std::string breve_descricao;
    Pessoa* dono;
public:
    Material (std::string nome, float quantidade_em_quilos, std::string breve_descricao, Pessoa* dono);
    virtual void modo_de_armazenamento();
    std::string get_nome();
    std::string get_breve_descricao ();
    Pessoa* get_dono();
    float get_quantidade_em_quilos();


};


#endif // MATERIAL_H_INCLUDED
