#include "cadastromaterial.cpp"
void MenuMaterial();
void MenuPrincipal();
void MenuPrincipal (){
    int opcaoprincipal;
    std::cout<<"(1)Usuario"<<std::endl;
    std::cout<<"(2)Material"<<std::endl;
    std::cout<<"(3)Pontos de coleta"<<std::endl;
    std::cout<<"Selecione a opcao desejada: ";
    std::cin>>opcaoprincipal;
    while (opcaoprincipal<1 || opcaoprincipal>3){
        std::cout<<"Opcao invalida. Escolha entre 1 e 2: "<<std::endl;
        std::cin>>opcaoprincipal;
    }
    switch (opcaoprincipal){
    case 2:
    MenuMaterial();
    }
}
void MenuMaterial(){
    CadastroMaterial cadastromaterial = CadastroMaterial();
    int opcao;
    std::cout<<"(1)Cadastrar Material"<<std::endl;
    std::cout<<"(2)Visualizar Materiais cadastrados"<<std::endl;
    std::cout<<"(3)Sair"<<std::endl;
    std::cout<<"Selecione a opcao desejada: ";
    std::cin>>opcao;
    while (opcao<1 || opcao>3){
        std::cout<<"Opcao invalida. Escolha entre 1 e 2: "<<std::endl;
        std::cin>>opcao;
    }

    switch (opcao){
    case 1:
        cadastromaterial.cadastrar_material();
    case 2:
        cadastromaterial.imprimir_materiais_cadastrados();
    case 3:
        MenuPrincipal();
    }


}

