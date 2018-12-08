#include <iostream>
#include <vector>
#include "cadastromaterial.h"
#include "..\usuario\pessoa.h"
#include "windows.h"
int mapa=0;
void clear_screen(char fill = ' '){
	COORD tl = { 0,0 };
	CONSOLE_SCREEN_BUFFER_INFO s;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(console, &s);
	DWORD written, cells = s.dwSize.X * s.dwSize.Y;
	FillConsoleOutputCharacter(console, fill, cells, tl, &written);
	FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
	SetConsoleCursorPosition(console, tl);
}
void CadastroMaterial::cadastrar_material(Pessoa* usuario_logado){
    int material;
    float quantidade;
    std::string descricao;
    clear_screen();
    std::cout<<"CADASTRO DE MATERIAL: "<<std::endl<<std::endl;
    std::cout<<"(1)Papel"<<std::endl;
    std::cout<<"(2)Plastico"<<std::endl;
    std::cout<<"(3)Metal"<<std::endl;
    std::cout<<"(4)Vidro"<<std::endl;
    std::cout<<"(5)Oleo"<<std::endl<<std::endl;
    std::cout<<"Escolha o tipo material que voce deseja cadastrar: ";
    std::cin>>material;
    while (material<1 ||material>5){
        std::cout<<"Opcao invalida, escolha de 1 a 5: ";
        std::cin>>material;

    }

    std::cout<<std::endl<<"Digite a quantidade do seu material em quilogramas (até 30 kg): ";
    std::cin>>quantidade;
    while (quantidade<0||quantidade>30){
        std::cout<<"Valor invalido, digite novamente:";
        std::cin>>quantidade;
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Digite uma breve descricao do seu material: ";
    while (descricao.length() == 0)
		std::getline(std::cin, descricao);

    if(material==1){
        Material *novopapel= new Papel (quantidade, descricao, usuario_logado);
        Materiais_cadastrados.push_back(novopapel);
        Mapadonos [usuario_logado->get_nome()] = Materiais_cadastrados;
        novopapel->modo_de_armazenamento();
    }
    else {
        if (material==2){
            Material *novoplastico= new Plastico (quantidade, descricao, usuario_logado);
            Materiais_cadastrados.push_back(novoplastico);
            Mapadonos [usuario_logado->get_nome()] = Materiais_cadastrados;
            novoplastico->modo_de_armazenamento();
        }
        else {
            if (material==3){
                Material *novometal= new Metal (quantidade, descricao, usuario_logado);
                Materiais_cadastrados.push_back(novometal);
                Mapadonos [usuario_logado->get_nome()] = Materiais_cadastrados;
                novometal->modo_de_armazenamento();
            }
            else {
                if (material==4){
                   Material *novovidro= new Vidro (quantidade, descricao, usuario_logado);
                   Materiais_cadastrados.push_back(novovidro);
                   Mapadonos [usuario_logado->get_nome()] = Materiais_cadastrados;
                   novovidro->modo_de_armazenamento();

                }
                else{
                    if (material=5){
                    Material *novooleo= new Oleo (quantidade, descricao, usuario_logado);
                    Materiais_cadastrados.push_back(novooleo);
                    Mapadonos [usuario_logado->get_nome()] = Materiais_cadastrados;
                    novooleo->modo_de_armazenamento();
                    }
                }
            }
        }
    }
}
void CadastroMaterial::imprimir_materiais_cadastrados(){
    std::cout<<"LISTA DE MATERIAIS CADASTRADOS"<<std::endl<<std::endl;
    if (Materiais_cadastrados.size()>0){
    for (int i=0; i<Materiais_cadastrados.size(); i++){
        std::cout<<"Tipo: "<< Materiais_cadastrados[i]->get_nome()<<std::endl;
        std::cout<<"Quantidade: "<<Materiais_cadastrados[i]->get_quantidade_em_quilos()<<std::endl;
        std::cout<<"Descricao: "<<Materiais_cadastrados[i]->get_breve_descricao()<<std::endl;
        std::cout<<"Dono: "<<Materiais_cadastrados[i]->get_dono()->get_nome()<<std::endl<<std::endl;
    }}
    else{
        std::cout<<"NAO HA MATERIAIS CADASTRADOS!"<<std::endl<<std::endl;
    }

}
void CadastroMaterial::excluirmaterial(int posicao){

    Materiais_cadastrados.erase(Materiais_cadastrados.begin()+posicao);
}
