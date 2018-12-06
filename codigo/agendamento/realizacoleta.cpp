#include <iostream>
#include "realizacoleta.h"

Realiza_Coleta::Realiza_Coleta(Pessoa *receptor)
{
    this->receptor = receptor;
}

void Realiza_Coleta::Imprime_dados()
{
    std::cout << receptor->get_nome() << "\n";
    std::cout << receptor->get_endereco() << "\n";

}
