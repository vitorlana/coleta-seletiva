#include "cadastromaterial.cpp"
#include "..\local\cadastrolocal.cpp"
void MenuMaterial();
void MenuPrincipal();
void MenuLocal();
void MenuPrincipal (){
    int opcaoprincipal;
    std::cout<<"MENU PRINCIPAL:"<<std::endl<<std::endl;
    std::cout<<"(1)Usuario"<<std::endl;
    std::cout<<"(2)Material"<<std::endl;
    std::cout<<"(3)Pontos de coleta"<<std::endl;
    std::cout<<"(4)Marcar coleta"<<std::endl;
    std::cout<<"(5)Sair"<<std::endl<<std::endl;
    std::cout<<"Selecione a opcao desejada: ";
    std::cin>>opcaoprincipal;
    while (opcaoprincipal<1 || opcaoprincipal>5){
        std::cout<<"Opcao invalida. Escolha entre 1 e 5: "<<std::endl;
        std::cin>>opcaoprincipal;
    }

    switch (opcaoprincipal){
    case 1:
    case 2:
    MenuMaterial();
    case 3:
    MenuLocal();
    case 4:
    case 5:
        break;

    }
}
void MenuMaterial(){
    CadastroMaterial cadastromaterial = CadastroMaterial();
    int opcao;
    std::cout<<"MENU MATERIAL:"<<std::endl<<std::endl;
    std::cout<<"(1)Cadastrar Material"<<std::endl;
    std::cout<<"(2)Visualizar Materiais cadastrados"<<std::endl;
    std::cout<<"(3)Sair"<<std::endl<<std::endl;
    std::cout<<"Selecione a opcao desejada: ";
    std::cin>>opcao;
    while (opcao<1 || opcao>3){
        std::cout<<"Opcao invalida. Escolha entre 1 e 3: "<<std::endl;
        std::cin>>opcao;
    }

    if (opcao==1){
        cadastromaterial.cadastrar_material();
        MenuPrincipal();
    }
    else{
        if (opcao==2){
            cadastromaterial.imprimir_materiais_cadastrados();
            MenuPrincipal();
        }
        else{
           MenuPrincipal();
        }
    }
}
<<<<<<< HEAD

void MenuLocal (){
    CadastroLocal cadastrolocal = CadastroLocal();
    int opcao;
    std::cout<<"MENU LOCAL:"<<std::endl<<std::endl;
    std::cout<<"(1)Cadastrar Local"<<std::endl;
    std::cout<<"(2)imprimir desejados"<<std::endl;
    std::cout<<"(3)sair"<<std::endl;
    std::cin>>opcao;
    if (opcao==1){
        cadastrolocal.cadastro();
        MenuPrincipal();
    }
    else{
        if (opcao==2){
            std::string x=cadastrolocal.escolheponto();
            std::cout<<x;
            MenuPrincipal();
        }
        else
            MenuPrincipal();
    }
}
=======
>>>>>>> vitor-agendamento
