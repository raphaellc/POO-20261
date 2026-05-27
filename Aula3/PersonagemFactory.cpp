// PersonagemFactory.cpp
#include "PersonagemFactory.h"
#include "Humano.h"
#include "Orc.h"
#include <stdexcept>

Personagem* PersonagemFactory::criar(const std::string& tipo,
                                     const std::string& nome) {
    Personagem* p = nullptr;

    if (tipo == "Humano")
        p = new Humano();
    else if (tipo == "Orc")
        p = new Orc();
    else if (tipo == "Personagem")
        p = new Personagem();
    else
        throw std::invalid_argument("Tipo desconhecido: " + tipo);

    p->definirNome(nome);
    return p;
}