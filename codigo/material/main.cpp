#include "material.cpp"
#include "plastico.cpp"
#include "vidro.cpp"
#include "papel.cpp"
#include "metal.cpp"
#include "menu.cpp"
#include "oleo.cpp"
#include <iostream>
int main (){
    Material *p = new Plastico (10.1, "sss");
    Material *v = new Vidro (2, "a");
    Material *r = new Metal (1, "s");
    Material *s = new Papel (11, "b");
    Material *o = new Oleo (2, "c");
    p->modo_de_armazenamento();
    v->modo_de_armazenamento();
    r->modo_de_armazenamento();
    s->modo_de_armazenamento();
    o->modo_de_armazenamento();
    std::cout<<p->get_nome();

    Menu();


}

