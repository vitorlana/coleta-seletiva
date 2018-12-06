#include "../usuario/cadastrousuario.cpp"
#include "../usuario/pessoa.cpp"
//#include "../material/cadastromaterial.cpp"
//#include "../material/material.cpp"
//#include "../local/local.cpp"
//#include "../local/cadastrolocal.cpp"
#include "../agendamento/realizacoleta.cpp"
#include "../agendamento/agendacoleta.cpp"
#include <iostream>

Pessoa *MenuUsuario();
void MenuPrincipal();
void MenuCadastroMaterial();

void MenuCadastroLocal();
void MenuCadastroColeta();

int main (){
    Pessoa *usuario = MenuUsuario();
    MenuPrincipal();
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
            usuario->login();
            break;
        }
    }while (opcao > 0);
    usuario->imprimepessoas();
    return usuario->pessoa_logada;
}

void MenuPrincipal (){
}
