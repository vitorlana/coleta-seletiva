#include "agendacoleta.h"

Agenda_Coleta::Agenda_Coleta(Pessoa *doador,CadastroMaterial *materiais)
{
    this->doador = doador;
    this->materiais = materiais;
}

void Agenda_Coleta::Imprime_dados()
{
    std::cout << doador->get_nome() << "\n";
    std::cout << doador->get_endereco() << "\n";
}

void Agenda_Coleta::Recebe_vector()
{
    vector_materiais = materiais->retorna_materiais(doador);
    std::cout <<"Tamanho vector " << vector_materiais.size() << "\n";
    for(int i=0; vector_materiais.size() < i; i++){
        std::cout << vector_materiais[i]->get_nome() << "\n";}
}
