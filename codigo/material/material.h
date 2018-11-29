#ifndef MATERIAL_H_INCLUDED
#define MATERIAL_H_INCLUDED
#include <iostream>
#include <string>
class Material {
protected:
    std::string nome;
    float quantidade_em_quilos;
    std::string breve_descricao;
public:
    Material (std::string nome, float quantidade_em_quilos, std::string breve_descricao);
    virtual void modo_de_armazenamento();
    std::string get_nome();
    std::string get_breve_descricao ();
    float get_quantidade_em_quilos();
    void set_breve_descricao (std::string breve_descricao);
    void set_quantidade_em_quilos(float quantidade_em_quilos);


};


#endif // MATERIAL_H_INCLUDED
