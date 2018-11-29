#include "papel.h"
Papel::Papel(float quantidade_em_quilos, std::string breve_descricao)
:Material ("Papel", quantidade_em_quilos, breve_descricao){}

void Papel::modo_de_armazenamento(){
    std::cout<<"Colocar o material limpo e seco em caixas ou sacolas"<< std:: endl<< std:: endl;
}
