#include "cadastrolocal.h"
#include "windows.h"

void clear_screen2(char fill = ' ')
{
	COORD tl = { 0,0 };
	CONSOLE_SCREEN_BUFFER_INFO s;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(console, &s);
	DWORD written, cells = s.dwSize.X * s.dwSize.Y;
	FillConsoleOutputCharacter(console, fill, cells, tl, &written);
	FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
	SetConsoleCursorPosition(console, tl);
}

void CadastroLocal::cadastro()
{
	std::cout << std::endl;
	std::cout << "CADASTRO DE NOVO LOCAL" << std::endl;
	std::cout << std::endl;

	std::string novolocal;

	std::cout << "Insira o local a ser cadastrado no sistema: ";
	while (novolocal.length() == 0)
		std::getline(std::cin, novolocal);

	Local *newlocal = new Local(novolocal);

	_locaisvector.push_back(newlocal);
	clear_screen2();
	std::cout << "-> CADASTRO DE LOCAL REALIZADO COM SUCESSO! " << newlocal->get_local() << " adicionada ao sistema." << std::endl;
}

std::string CadastroLocal::escolheponto()
{
	std::cout << std::endl;
	std::cout << "Listagem de todos os locais de encontro cadastrados: " << std::endl;
	std::cout << std::endl;

	int count = 0;

	for (unsigned int i = 0; i < _locaisvector.size(); i++) {
		std::cout << "Local: " << _locaisvector.at(i)->get_local() << " - Tag: (" << count << ")" << std::endl;
		count++;
	}

	int tag;

	std::cout << std::endl;
	std::cout << "Selecione agora, dentre os locais acima, o de interesse, inserindo sua tag: ";
	std::cin >> tag;
	std::cout << std::endl;

	for (unsigned int i = 0; i < _locaisvector.size(); i++) {
		if (i == tag)
			return _locaisvector.at(i)->get_local();
	}
}
