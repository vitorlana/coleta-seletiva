#include <iostream>
#include <vector>
#include "cadastromaterial.h"
#include "windows.h"
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
    clear_screen();
    std::cout<<std::endl<<"Digite a quantidade do seu material em quilogramas: ";
    std::cin>>quantidade;
    std::cout<<std::endl;
    std::cout<<"Digite uma breve descricao (25 caracteres) do seu material: ";
    std::cin>>descricao;
    clear_screen();
    if(material==1){
        Material *novopapel= new Papel (quantidade, descricao);
        Materiais_cadastrados.push_back (novopapel);
        std::cout<<Materiais_cadastrados.size();
        std::cout<<std::endl;
        novopapel->modo_de_armazenamento();

    }
    else {
        if (material==2){
            Material *novoplastico= new Plastico(quantidade, descricao);
            Materiais_cadastrados.push_back (novoplastico);
            std::cout<<Materiais_cadastrados.size();
            std::cout<<std::endl;
            novoplastico->modo_de_armazenamento();

        }
        else {
            if (material==3){
                Material *novometal= new Metal(quantidade, descricao);
                Materiais_cadastrados.push_back (novometal);
                std::cout<<Materiais_cadastrados.size();
                std::cout<<std::endl;
                novometal->modo_de_armazenamento();

            }
            else {
                if (material==4){
                    Material *novovidro= new Vidro(quantidade, descricao);
                    Materiais_cadastrados.push_back (novovidro);
                    std::cout<<Materiais_cadastrados.size();
                    std::cout<<std::endl;
                    novovidro->modo_de_armazenamento();

                }
                else{
                    if (material=5){
                    Material *novooleo= new Oleo(quantidade, descricao);
                    Materiais_cadastrados.push_back(novooleo);
                    std::cout<<"materiais cadastrados: "<<Materiais_cadastrados.size();
                    std::cout<<std::endl;
                    clear_screen();
                    novooleo->modo_de_armazenamento();}
                }
            }
        }
    }
}
void CadastroMaterial::imprimir_materiais_cadastrados(){
    std::cout<<"LISTA DE MATERIAIS CADASTRADOS"<<std::endl<<std::endl;
    if(Materiais_cadastrados.size()>0){
    for (std::vector<Material*>::iterator it = Materiais_cadastrados.begin(); it != Materiais_cadastrados.end(); it++){
        std::cout<<"Tipo: "<< (*it)->get_nome()<<std::endl;
        std::cout<<"Quantidade: "<<(*it)->get_quantidade_em_quilos()<<std::endl;
        std::cout<<"Descricao: "<<(*it)->get_breve_descricao()<<std::endl<<std::endl;
    }}
    else {
        std::cout<<"NAO HA MATERIAIS CADASTRADOS"<<std::endl;
    }
}
