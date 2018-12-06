#include "metal.h"
Metal::Metal(float quantidade_em_quilos, std::string breve_descricao)
:Material ("Metal", quantidade_em_quilos, breve_descricao){}

void Metal::modo_de_armazenamento(){
    std::cout<<"SEU MATERIAL FOI CADASTRADO COM SUCESSO!"<<std::endl;
    std::cout<<"MODO DE ARMAZENAMENTO: "<<std::endl;
    std::cout<< "Colocar o material limpo e seco em caixas ou sacolas" << std::endl << "Sinalizar se houver algum risco de corte" << std:: endl<< std:: endl;
}
