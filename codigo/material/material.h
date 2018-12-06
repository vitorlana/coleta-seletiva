#ifndef MATERIAL_H_INCLUDED
#define MATERIAL_H_INCLUDED
#include <iostream>
#include <string>
class Material {
protected:
    std::string nome;
    float quantidade_em_quilos;
    std::string breve_descricao;
    //dono
public:
    Material (std::string nome, float quantidade_em_quilos, std::string breve_descricao);
    virtual void modo_de_armazenamento();
    std::string get_nome();
    std::string get_breve_descricao ();
    float get_quantidade_em_quilos();

};


#endif // MATERIAL_H_INCLUDED
