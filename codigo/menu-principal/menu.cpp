#include "../usuario/cadastrousuario.cpp"
#include "../usuario/pessoa.cpp"
//#include "../material/cadastromaterial.cpp"
//#include "../material/material.cpp"
//#include "../local/local.cpp"
//#include "../local/cadastrolocal.cpp"
#include "../agendamento/realizacoleta.cpp"
//#include "../agendamento/agendacoleta.cpp"

void MenuPrincipal();

int main (){
    MenuPrincipal();

    return 0;
}


void MenuPrincipal (){
    CadastroUsuario *usuario = new CadastroUsuario();
    usuario->cadastro();
    usuario->login();
    Realiza_Coleta coleta = Realiza_Coleta(usuario->pessoa_logada);
    coleta.Imprime_dados();
}
