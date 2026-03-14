#pragma once
#include "Personagem.h"
class RPG{
    private:
      Personagem * personagem1;
      Personagem * personagem2;  
    public:
        //Construtor 
        RPG(Personagem *p1, Personagem *p2);
        void iniciarBatalha();
                
};