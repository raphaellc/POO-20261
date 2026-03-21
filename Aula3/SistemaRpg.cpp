#include "RPG.h"
#include "Personagem.h"

int main(){
    Personagem *p1 = new Personagem();
    Personagem *p2 = new Personagem();
    p1->definirNome("Mario");
    p2->definirNome("Luigi");
    
    RPG *rpg = new RPG(p1, p2);
    rpg->iniciarBatalha();
    delete p1;
    delete p2;
    delete rpg;
    return 0;
}