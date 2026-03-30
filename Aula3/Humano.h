#pragma once
//Especie
#include "Personagem.h"
// class nome_da_classe : nome_da_classe_base {}
class Humano : public Personagem {
    private: 
        int versatilidade;
    public:
        Humano();
        ~Humano();
        void setVersatiliade(int v);
        int getVersatilidade();
        //virtual tipo_retorno nome_metodo(argumentos) override
        virtual void atacar(Personagem *p) override;
};