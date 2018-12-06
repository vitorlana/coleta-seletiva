#include <iostream>
#include "realizacoleta.h"

Realiza_Coleta::Realiza_Coleta(Pessoa *usuario_receptor)
{
    this->usuario_receptor = usuario_receptor;
}

void Realiza_Coleta::Imprime_dados()
{
    std::cout << usuario_receptor->get_nome() << "\n";
    std::cout << usuario_receptor->get_endereco() << "\n";

}
