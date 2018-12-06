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
#include "windows.h"

Pessoa *MenuUsuario();
void MenuPrincipal();
void MenuCadastroMaterial();
void MenuCadastroLocal();
void MenuCadastroColeta(Pessoa *usuario);

int main (){
    Pessoa *usuario = MenuUsuario();
    MenuPrincipal();
    MenuCadastroColeta(usuario);
    Realiza_Coleta coleta = Realiza_Coleta(usuario);
    coleta.Imprime_dados();

    return 0;
}

Pessoa *MenuUsuario(){
    CadastroUsuario *usuario = new CadastroUsuario();
    int opcao;
    do
    {
        std::cout << "1 - CADASTRO USUARIO / 2 - LOGIN / 0 - SAIR"  << "\n";

        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
            usuario->cadastro();
            break;
        case 2:
            std::cout << "USUARIOS DIPONIVEIS PARA LOGIN" << "\n";
            usuario->imprimepessoas();
            usuario->login();
            return usuario->pessoa_logada;
        }
    }while (opcao > 0);
}

void MenuCadastroColeta(Pessoa *usuario)
{
    if (usuario->get_tipovalor()==1)
    {
        std::cout << "Receptor" << "\n";
    }else if (usuario->get_tipovalor()==2)
    {
        std::cout << "Doador" << "\n";
    }
}

void MenuPrincipal(){
    int opcao;
    do
    {
        std::cout << "1 - CADASTRAR MATERIAL \n 2 - CADATRAR LOCAL \n 3 - AGENDAR COLETA \n 0 - SAIR"  << "\n";
        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            return;
        }
    }while (opcao > 0);
}
