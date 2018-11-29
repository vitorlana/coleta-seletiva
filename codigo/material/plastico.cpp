#include "plastico.h"
Plastico::Plastico(float quantidade_em_quilos, std::string breve_descricao)
:Material ("Plastico", quantidade_em_quilos, breve_descricao){}

void Plastico::modo_de_armazenamento(){
    std::cout<<"Modo de Armazenamento: " << std::endl << "Colocar o material limpo e seco em caixas ou sacolas" << std::endl << "Sinalizar se houver algum risco de corte" << std:: endl<< std:: endl;
}
