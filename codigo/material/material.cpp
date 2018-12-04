#include "material.h"
Material::Material(std::string nome, float quantidade_em_quilos, std::string breve_descricao){
    this->nome=nome;
    this->quantidade_em_quilos=quantidade_em_quilos;
    this->breve_descricao=breve_descricao;
}
void Material::modo_de_armazenamento(){
    //std::cout<< "modo de armazenamento"<< std::endl;

}
std::string Material::get_nome(){
    return nome;
}
std::string Material::get_breve_descricao(){
    return breve_descricao;
}
float Material::get_quantidade_em_quilos(){
    return quantidade_em_quilos;
}
