#include "vidro.h"
Vidro::Vidro(float quantidade_em_quilos, std::string breve_descricao)
:Material ("Vidro", quantidade_em_quilos, breve_descricao){}

void Vidro::modo_de_armazenamento(){
    std::cout<<"Modo de Armazenamento: " << std::endl << "Colocar o material limpo e seco em caixas fechadas"<< std::endl <<"Se nao houver nenhuma caixa disponivel, armazena-lo em sacolas" << std::endl << "Sinalizar com letras grandes que há vidro na embalagem" << std:: endl<< std:: endl;
}
