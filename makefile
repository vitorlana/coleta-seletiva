### Make File ###
all:menu

menu: menu.o
	g++ -o menu menu.o
menu.o: ./codigo/menu-principal/menu.cpp
	g++ -c -g ./codigo/menu-principal/menu.cpp
