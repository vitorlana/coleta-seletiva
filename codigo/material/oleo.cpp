#include "Oleo.h"
Oleo::Oleo(float quantidade_em_quilos, std::string breve_descricao)
:Material ("Oleo", quantidade_em_quilos, breve_descricao){}

void Oleo::modo_de_armazenamento(){
    std::cout<<"Filtrar o material e retirar as particulas solidas" <<std::endl<< "Armazena-lo em galoes ou em garrafas pet" << std::endl<< std:: endl;
}
