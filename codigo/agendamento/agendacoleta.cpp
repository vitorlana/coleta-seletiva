#include "agendacoleta.h"

Agenda_Coleta::Agenda_Coleta(Pessoa *doador)
{
    this->doador = doador;
}

void Agenda_Coleta::Imprime_dados()
{
    std::cout << doador->get_nome() << "\n";
    std::cout << doador->get_endereco() << "\n";

}
