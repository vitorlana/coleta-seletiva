#include "cadastromaterial.h"
void Menu(){
    int opcao;
    std::cout<<"Selecione a opcao desejada:"<<std::endl<<std::endl;
    std::cout<<"(1)Cadastrar Material"<<std::endl;
    std::cout<<"(2)Visualizar Materiais cadastrados"<<std::endl;
    std::cin>>opcao;
    while (opcao<1 || opcao>2){
        std::cout<<"Opcao invalida. Escolha entre 1 e 2: "
        std::cin>>opcao;
    }
    switch (opcao){
    case 1:
        cadastrar_material();
    case 2:

    }

}

