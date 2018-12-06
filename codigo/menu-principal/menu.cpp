#include "../usuario/cadastrousuario.cpp"
#include "../usuario/pessoa.cpp"
#include "../material/cadastromaterial.cpp"
#include "../material/material.cpp"
#include "../material/plastico.cpp"
#include "../material/vidro.cpp"
#include "../material/papel.cpp"
#include "../material/metal.cpp"
#include "../material/oleo.cpp"
//#include "../local/local.cpp"
//#include "../local/cadastrolocal.cpp"
#include "../agendamento/realizacoleta.cpp"
#include "../agendamento/agendacoleta.cpp"
#include <iostream>
#include <iomanip>

Pessoa *MenuUsuario();
void MenuPrincipal(Pessoa *usuario);
void MenuCadastroMaterial();
void MenuCadastroLocal();
void MenuCadastroColeta(Pessoa *usuario);
void MenuMaterial();

int opcao =1 ;
Pessoa *usuario_logado;
CadastroUsuario *usuario_cadastro = new CadastroUsuario();
CadastroMaterial *material_cadastro= new CadastroMaterial();

int main (){

    while (opcao > 0 )
    {
        usuario_logado = MenuUsuario();
        MenuPrincipal(usuario_logado);
    }

    //MenuCadastroColeta(usuario);
    //Realiza_Coleta coleta = Realiza_Coleta(usuario);
    //coleta.Imprime_dados();

    return 0;
}

Pessoa *MenuUsuario(){

    int opcao;
    do
    {
        std::cout << "1 - CADASTRO USUARIO / 2 - LOGIN / 0 - SAIR"  << "\n";

        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
            usuario_cadastro->cadastro();
            break;
        case 2:
            std::cout << "USUARIOS DIPONIVEIS PARA LOGIN" << "\n";
            usuario_cadastro->imprimepessoas();
            usuario_cadastro->login();
            return usuario_cadastro->pessoa_logada;
        case 0:
            exit(1);
        }
    }while (opcao > 0);
}

void MenuCadastroColeta(Pessoa *usuario)
{
    if (usuario->get_tipovalor()==1)
    {
        std::cout << "Receptor" << "\n";
        Agenda_Coleta *agendamento = new Agenda_Coleta(usuario);
        agendamento->Imprime_dados();
    }else if (usuario->get_tipovalor()==2)
    {
        std::cout << "Doador" << "\n";
    }else
    {
        std::cout << "locutafhasdfhasuhfauhsuhd" << "\n";
    }
}

void MenuPrincipal(Pessoa *usuario){
    int opcao;
    do
    {
        std::cout << "1 - CADASTRAR MATERIAL \n 2 - CADATRAR LOCAL \n 3 - AGENDAR COLETA \n 0 - SAIR"  << "\n";
        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
            MenuMaterial();
        case 2:
            break;
        case 3:
            MenuCadastroColeta(usuario);
            break;
        case 4:
            break;
        }
    }while (opcao > 0);
}
void MenuMaterial(){
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
    clear_screen();
    if (opcao==1){
        material_cadastro->cadastrar_material();

    }
    else{
        if (opcao==2){
            material_cadastro->imprimir_materiais_cadastrados();
            MenuPrincipal(usuario_cadastro->pessoa_logada);
        }
        else{
           MenuPrincipal(usuario_cadastro->pessoa_logada);
        }
    }
}

