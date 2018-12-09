#include "coleta.h"

Coleta::Coleta(int posicao_vetor, std::string local_coleta, std::string doador, std::string receptor)
{
    this->posicao_vetor = posicao_vetor;
    this->local_coleta = local_coleta;
    this->doador = doador;
    this->receptor = receptor;
}

void Coleta::set_coleta_realizada(){
    Coleta_realizada = true;
}
