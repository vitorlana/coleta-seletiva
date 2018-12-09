#include "../usuario/cadastrousuario.cpp"
#include "../usuario/pessoa.cpp"
#include "../material/cadastromaterial.cpp"
#include "../material/material.cpp"
#include "../material/plastico.cpp"
#include "../material/vidro.cpp"
#include "../material/papel.cpp"
#include "../material/metal.cpp"
#include "../material/oleo.cpp"
#include "../local/local.cpp"
#include "../local/cadastrolocal.cpp"
#include "../agendamento/realizacoleta.cpp"
#include "../agendamento/agendacoleta.cpp"
#include "../agendamento/coleta.cpp"
#include <iostream>
#include <iomanip>

Pessoa *MenuUsuario();
void MenuPrincipal(Pessoa *usuario);
void MenuMaterial(Pessoa *usuariologado);
void MenuLocal();
void MenuCadastroColeta(Pessoa *usuario);


int opcao =1 ;
Pessoa *usuario_logado;
CadastroUsuario *usuario_cadastro = new CadastroUsuario();
CadastroMaterial *material_cadastro = new CadastroMaterial();
CadastroLocal *local_cadastro= new CadastroLocal();
Agenda_Coleta *agenda = new Agenda_Coleta();

int main (int argc, char *argv[ ]){

    while (opcao >= 0 )
    {
        usuario_logado = MenuUsuario();
        MenuPrincipal(usuario_logado);
    }
    return 0;
}

Pessoa *MenuUsuario(){

    int opcao;
    do{
        std::cout <<"INICIO"<<std::endl<<std::endl;
        std::cout<<"(1)Cadastro de Usuario"<<std::endl;
        std::cout<<"(2)Login"<<std::endl;
        std::cout<<"(3)Sair"<<std::endl;
        std::cin >> opcao;
        while (opcao<1 || opcao>3){
            std::cout<<"Opcao invalida! Escolha novamente:"<<std::endl;
            std::cin>>opcao;
        }
        switch (opcao)
        {
        case 1:
            usuario_cadastro->cadastro();
            break;
        case 2:
            system("cls||clear");
            std::cout << "USUARIOS DIPONIVEIS PARA LOGIN" << "\n";
            usuario_cadastro->imprimepessoas();
            usuario_cadastro->login();
            return usuario_cadastro->pessoa_logada;
        case 3:
            exit(1);
        }
    }while (opcao > 0);
}

void MenuPrincipal(Pessoa *usuario){
    int opcao;
    do
    {
        std::cout << "MENU PRINCIPAL:"<<std::endl<<std::endl;
        std::cout<<"(1)Menu Material"<<std::endl;
        std::cout<<"(2)Menu Local"<<std::endl;
        std::cout<<"(3)Agendamento de Coletas"<<std::endl;
        std::cout<<"(4)Sair"<<std::endl;
        std::cin >> opcao;
        while (opcao<1 || opcao>4){
            std::cout<<"Opcao invalida! Escolha novamente: a"<<std::endl;
            std::cin>>opcao;
        }
        switch (opcao)
        {
        case 1:
            MenuMaterial(usuario);
            break;
        case 2:
            MenuLocal();
            break;
        case 3:
            MenuCadastroColeta(usuario);
            break;
        case 4:
            return;
        }
    }while (opcao > 0);
}

void MenuMaterial(Pessoa* usuario_logado){
    int opcao;
    system("cls||clear");
    do
    {
        std::cout<<"MENU MATERIAL:"<<std::endl<<std::endl;
        std::cout<<"(1)Cadastrar Material"<<std::endl;
        std::cout<<"(2)Visualizar Materiais cadastrados"<<std::endl;
        std::cout<<"(3)Excluir Material Cadastrado"<<std::endl;
        std::cout<<"(4)Sair"<<std::endl<<std::endl;
        std::cout<<"Selecione a opcao desejada: ";
        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
            material_cadastro->cadastrar_material(usuario_logado);
            break;
        case 2:
            material_cadastro->imprimir_materiais_cadastrados(usuario_logado);
            break;
        case 3:
            int pos;
            system("cls||clear");
            material_cadastro->imprimir_materiais_cadastrados(usuario_logado);
            std::cout <<"Insira  a posicao do material" << "\n";
            std::cin >> pos;
            material_cadastro->excluirmaterial((pos-1),usuario_logado);
            break;
        case 4:
            return;
            break;
        default:
            std::cout << "Tente novamente" << "\n";
        }
    } while (opcao != 4);
    system("cls||clear");
}

void MenuCadastroColeta(Pessoa *usuario)
{
    if (usuario->get_tipovalor()==1)
    {
        std::cout << "MENU COLETA\n" << "\n";
        std::cout << "Como receptor voce pode:" << "\n";
        std::cout << "(1)Realizar uma Coleta" << "\n";
        std::cout << "(2)Ver coletas realizadas" << "\n";
        std::cout << "(3)Sair" << "\n";

        Realiza_Coleta *realiza = new Realiza_Coleta(usuario);

    }else if (usuario->get_tipovalor()==2)
    {
        std::cout << "MENU COLETA\n" << "\n";
        std::cout << "Como doador voce pode:" << "\n";
        std::cout << "(1)Agendar uma Coleta" << "\n";
        //std::cout << "(2)Ver coletas agendadas" << "\n";
        //std::cout << "(3)Sair" << "\n";

        //Agenda_Coleta *agenda = new Agenda_Coleta(usuario, material_cadastro,local_cadastro,usuario_cadastro);
        agenda->Realiza_Agendamento(usuario, material_cadastro,local_cadastro,usuario_cadastro);
        //agenda->Recebe_vector();
        std::cin >> opcao;

    }
}

void MenuLocal(){
    int opcao;
    system("cls||clear");
    do
    {
        std::cout<<"MENU LOCAL:"<<std::endl<<std::endl;
        std::cout<<"(1)Cadastrar Local"<<std::endl;
        std::cout<<"(2)Ver Locais Cadastrados"<<std::endl;
        std::cout<<"(3)Excluir Local"<<std::endl;
        std::cout<<"(4)Sair"<<std::endl<<std::endl;
        std::cout<<"Selecione a opcao desejada: ";
        std::cin>>opcao;
        while (opcao<1 || opcao>5){
            std::cout<<"Opcao invalida. Escolha entre 1 e 4: "<<std::endl;
            std::cin>>opcao;
        }
        system("cls||clear");
        switch (opcao)
        {
        case 1:
            local_cadastro->cadastro();
            break;
        case 2:
            local_cadastro->imprime_locais();
            break;
        case 3:
            local_cadastro->excluir_local();
            break;
        case 4:
            return;
            break;
        }
    } while (opcao != 5);

}
