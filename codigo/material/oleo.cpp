#include "oleo.h"
Oleo::Oleo(float quantidade_em_quilos, std::string breve_descricao, Pessoa* dono)
:Material ("Oleo", quantidade_em_quilos, breve_descricao, dono){}

void Oleo::modo_de_armazenamento(){
    std::cout<<"SEU MATERIAL FOI CADASTRADO COM SUCESSO!"<<std::endl;
    std::cout<<"MODO DE ARMAZENAMENTO: "<<std::endl;
    std::cout<<"Filtrar o material e retirar as particulas solidas" <<std::endl<< "Armazena-lo em galoes ou em garrafas pet" << std::endl<< std:: endl;
}
