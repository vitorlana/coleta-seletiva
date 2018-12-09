#include "agendacoleta.h"
#include <vector>
Agenda_Coleta::Agenda_Coleta(Pessoa *doador,CadastroMaterial *materiais, CadastroLocal *locais, CadastroUsuario *lista_usuarios)
{
    this->doador = doador;
    this->materiais = materiais;
    this->locais = locais;
    this->lista_usuarios = lista_usuarios;
}

void Agenda_Coleta::Imprime_dados(){
    for (int i = 0; i < vec_coletas.size(); i++) {
        std::cout << "NUMERO DO MATERIAL :" << vec_coletas.at(i)->get_posicao_vetor() << '\n';
        std::cout << "LOCAL DE COLETA DO MATERIAL:"<<vec_coletas.at(i)->get_local_coleta() << '\n';
        std::cout << "DOADOR DO MATERIAL:"<<vec_coletas.at(i)->get_doador() << '\n';
        std::cout << "RECEPTOR DO MATERIAL:"<<vec_coletas.at(i)->get_receptor() << '\n';
    }
}

void Agenda_Coleta::Recebe_vector()
{
    vector_materiais = materiais->retorna_materiais(doador);
    for(int i=0; vector_materiais.size() < i; i++){
        std::cout << vector_materiais[i]->get_nome() << "\n";}
}

void Agenda_Coleta::Realiza_Agendamento(Pessoa *doador,CadastroMaterial *materiais, CadastroLocal *locais, CadastroUsuario *lista_usuarios)
{
    system("clear||cls");
    int posicao_vetor;
    std::string nome_realizar_coleta;
    std::string local_realizar_coleta;
    std::string nome_doador_material = doador->get_nome();

    std::cout << "BEM VIDOS A AGENDAMENTO COLETAS" << std::endl<< std::endl;
    std::cout << "COMO DOADOR DE MATERIAIS VOCE DEVE ESCOLHER PARA DOAR" << std::endl<< std::endl;
    std::cout << "UM MATERIAL, UM LOCAL E O USUARIO RECOLHEDOR" << std::endl<< std::endl;
    std::cout << "OS MATERIAIS DIPONIVEIS SAO:" << std::endl<< std::endl;
    materiais->imprimir_materiais_cadastrados(doador);
    std::cout << "INSIRA A POSICAO DO MATERIAL QUE QUER AGENDAR UMA COLETA:" << '\n';
    std::cin >> posicao_vetor;
    std::cout << "OS LOCAIS DISPONIVEIS PARA DEPOSITO SAO (CASO VAZIO INSIRA UM NOVO) :" << std::endl<< std::endl;
    locais->imprime_locais();
    std::cout << "INSIRA O LOCAL QUE QUER AGENDAR UMA COLETA:" << '\n';
    while (local_realizar_coleta.length() == 0)
		std::getline(std::cin, local_realizar_coleta);
    std::cout << "INSIRA O NOME DO USUARIO QUE IRÁ REALIZAR A COLETA" << '\n';
    std::cout << "OS USUARIOS DISPONIVEIS PARA ESCOLHA DE RECOLHER SAO:" << std::endl<< std::endl;
    lista_usuarios->imprimepessoas();
    while (nome_realizar_coleta.length() == 0)
		std::getline(std::cin, nome_realizar_coleta);
    Coleta *coleta =  new Coleta(posicao_vetor,local_realizar_coleta,nome_doador_material,nome_realizar_coleta);
    vec_coletas.push_back(coleta);
    std::cout << "COLETA AGENDADA COM SUCESSO" << '\n';
    return;
}
