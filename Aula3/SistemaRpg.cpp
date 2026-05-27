#include "RPG.h"
#include "PersonagemFactory.h"
#include "Personagem.h"
#include "Humano.h"


int main(){
    /*Personagem *p1 = new Personagem();
    Personagem *p2 = new Personagem();
    Personagem *p3 = new Humano();*/
    Personagem* p1 = PersonagemFactory::criar("Humano",     "Mario");
    Personagem* p2 = PersonagemFactory::criar("Orc",        "Luigi");
    Personagem* p3 = PersonagemFactory::criar("Personagem", "NPC");
    Humano *humano = new Humano();
    //delete p3; // ~Humano(), ~Personagem()
    p1->definirNome("Mario");
    p2->definirNome("Luigi");
    p3->definirNome("Raphael");
    
    humano->definirNome("Pedro");
    p3->atacar(humano);
    
    humano->setVersatiliade(50);
    humano->atacar(p3);
    RPG *rpg = new RPG(p1, p2);
    //rpg->iniciarBatalha();
    delete p1;
    delete p2;
    delete rpg;
    return 0;
}