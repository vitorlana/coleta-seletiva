#include <iostream>
#include <vector>
#include "cadastromaterial.h"
void CadastroMaterial::cadastrar_material(){
    int material;
    float quantidade;
    std::string descricao;
    std::cout<<std::endl<<"(1)Papel (2)Plastico (3)Metal (4)Vidro (5)Oleo"<<std::endl;
    std::cout<<"Escolha o tipo material que voce deseja cadastrar: ";
    std::cin>>material;
    while (material<1 ||material>5){
        std::cout<<"Opcao invalida, escolha de 1 a 5: ";
        std::cin>>material;

    }
    std::cout<<std::endl<<"Digite a quantidade do seu material em quilogramas: ";
    std::cin>>quantidade;
    std::cout<<std::endl;
    std::cout<<"Digite uma breve descricao (25 caracteres) do seu material: ";
    std::cin>>descricao;
    if(material==1){
        Material *novopapel= new Papel (quantidade, descricao);
        Materiais_cadastrados.push_back (novopapel);
        std::cout<<std::endl;
        novopapel->modo_de_armazenamento();
    }
    else {
        if (material==2){
            Material *novoplastico= new Plastico(quantidade, descricao);
            Materiais_cadastrados.push_back (novoplastico);
            std::cout<<std::endl;
            novoplastico->modo_de_armazenamento();
        }
        else {
            if (material==3){
                Material *novometal= new Metal(quantidade, descricao);
                Materiais_cadastrados.push_back (novometal);
                std::cout<<std::endl;
                novometal->modo_de_armazenamento();
            }
            else {
                if (material==4){
                    Material *novovidro= new Vidro(quantidade, descricao);
                    Materiais_cadastrados.push_back (novovidro);
                    std::cout<<std::endl;
                    novovidro->modo_de_armazenamento();
                }
                else{
                    Material *novooleo= new Oleo(quantidade, descricao);
                    Materiais_cadastrados.push_back (novooleo);
                    std::cout<<std::endl;
                    novooleo->modo_de_armazenamento();
                }
            }
        }
    }
}
void CadastroMaterial::imprimir_materiais_cadastrados(){

}
