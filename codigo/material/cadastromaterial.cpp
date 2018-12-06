#include <iostream>
#include <vector>
#include "cadastromaterial.h"
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
void CadastroMaterial::cadastrar_material(){
    int material;
    float quantidade;
    std::string descricao;
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

    std::cout<<std::endl<<"Digite a quantidade do seu material em quilogramas: ";
    std::cin>>quantidade;
    std::cout<<std::endl;
    std::cout<<"Digite uma breve descricao (25 caracteres) do seu material: ";
    std::cin>>descricao;

    if(material==1){
        Material *novopapel= new Papel (quantidade, descricao);
        Materiais_cadastrados[novopapel->get_breve_descricao()] = novopapel;
        std::cout<<Materiais_cadastrados.size()<<std::endl;

    }
    else {
        if (material==2){
            Material *novoplastico= new Plastico (quantidade, descricao);
            Materiais_cadastrados[novoplastico->get_breve_descricao()] = novoplastico;
            std::cout<<Materiais_cadastrados.size()<<std::endl;
        }
        else {
            if (material==3){
                Material *novometal= new Metal (quantidade, descricao);
                Materiais_cadastrados[novometal->get_breve_descricao()] = novometal;
                std::cout<<Materiais_cadastrados.size()<<std::endl;
            }
            else {
                if (material==4){
                   Material *novovidro= new Vidro (quantidade, descricao);
                    Materiais_cadastrados[novovidro->get_breve_descricao()] = novovidro;
                    std::cout<<Materiais_cadastrados.size()<<std::endl;

                }
                else{
                    if (material=5){
                    Material *novooleo= new Oleo (quantidade, descricao);
                    Materiais_cadastrados[novooleo->get_breve_descricao()] = novooleo;
                    std::cout<<Materiais_cadastrados.size()<<std::endl;
                    }
                }
            }
        }
    }
}
void CadastroMaterial::imprimir_materiais_cadastrados(){
    std::cout<<"LISTA DE MATERIAIS CADASTRADOS"<<std::endl<<std::endl;

    for (std::map<std::string , Material*>::iterator it = Materiais_cadastrados.begin(); it != Materiais_cadastrados.end(); it++){
        std::cout<<"Tipo: "<< it->second->get_nome()<<std::endl;
        std::cout<<"Quantidade: "<<it->second->get_quantidade_em_quilos()<<std::endl;
        std::cout<<"Descricao: "<<it->second->get_breve_descricao()<<std::endl<<std::endl;
    }

}
