#include <iostream>
#include "realizacoleta.h"

void Realiza_Coleta::Imprime_Coletas_ARealizar(std::vector<Coleta*> coletas_disponiveis, Pessoa *usuario)
{
    for (int i=0; i<coletas_disponiveis.size();i++) {
        if (coletas_disponiveis.at(i)->get_receptor() == usuario->get_nome() && coletas_disponiveis.at(i)->get_status() == false ){
            std::cout << "NUMERO DA COLETA :"<< i << '\n';
            std::cout << "NUMERO DO MATERIAL :" << coletas_disponiveis.at(i)->get_posicao_vetor() << '\n';
            std::cout << "LOCAL DE COLETA DO MATERIAL:"<<coletas_disponiveis.at(i)->get_local_coleta() << '\n';
            std::cout << "DOADOR DO MATERIAL:"<<coletas_disponiveis.at(i)->get_doador() << '\n';
            std::cout << "RECEPTOR DO MATERIAL:"<<coletas_disponiveis.at(i)->get_receptor() << '\n';
        }
    }

}

void Realiza_Coleta::Imprime_Coletas_Realizadas(std::vector<Coleta*> coletas_disponiveis, Pessoa *usuario)
{
    for (int i=0; i<coletas_disponiveis.size();i++) {
        if (coletas_disponiveis.at(i)->get_receptor() == usuario->get_nome() && coletas_disponiveis.at(i)->get_status() == true){
            std::cout << "---------STATUS REALIZADO------ " << '\n';
            std::cout << "NUMERO DA COLETA :"<< i << '\n';
            std::cout << "NUMERO DO MATERIAL :" << coletas_disponiveis.at(i)->get_posicao_vetor() << '\n';
            std::cout << "LOCAL DE COLETA DO MATERIAL:"<<coletas_disponiveis.at(i)->get_local_coleta() << '\n';
            std::cout << "DOADOR DO MATERIAL:"<<coletas_disponiveis.at(i)->get_doador() << '\n';
            std::cout << "RECEPTOR DO MATERIAL:"<<coletas_disponiveis.at(i)->get_receptor() << '\n\n';
            }
        }
}

void Realiza_Coleta::Realizar_Coleta(std::vector<Coleta*> coletas_disponiveis, Pessoa *usuario,CadastroMaterial *materiais){
    int n_coleta;
    system("cls||clear");
    std::cout << "ESSAS SÃO AS COLETAS QUE VOCE PODE REALIZAR" << '\n';
    std::cout << "ESCOLHA UMA DAS COLETAS INDICANDO O NUMERO NA FRENTE DELAS:" << '\n';
    Imprime_Coletas_ARealizar(coletas_disponiveis,usuario);
    std::cout << "INSIRA O NUMERO DA COLETA QUE QUER REALIZAR:" << '\n';
    std::cin >> n_coleta;
    //Recebe_vector(materiais,get_coleta(coletas_disponiveis,coletas_disponiveis.at(n_coleta)->get_posicao_vetor()).get_doador());
    //Coleta *aux = get_coleta(coletas_disponiveis,n_coleta);
    materiais->excluir_material(coletas_disponiveis.at(n_coleta)->get_posicao_vetor(), coletas_disponiveis.at(n_coleta)->get_doador());
    coletas_disponiveis.at(n_coleta)->set_coleta_realizada();
    //vector_materiais.erase(vector_materiais.begin()+n_coleta);
    std::cout << "COLETA REALIZDA COM SUCESSO" << '\n';
}

void Realiza_Coleta::Recebe_vector(CadastroMaterial *materiais, std::string usuario)
{
    vector_materiais = materiais->retorna_materiais(usuario);
    for(int i=0; vector_materiais.size() < i; i++){
        std::cout << vector_materiais[i]->get_nome() << "\n";}
}

Coleta Realiza_Coleta::get_coleta(std::vector<Coleta*> coletas_disponiveis, int posicao){
    return *coletas_disponiveis.at(posicao);
}
