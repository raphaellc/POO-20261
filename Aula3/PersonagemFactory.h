// PersonagemFactory.h
#pragma once
#include "Personagem.h"
#include <string>

class PersonagemFactory {
public:
    // Método fábrica — retorna a abstração, esconde a concretude
    static Personagem* criar(const std::string& tipo,
                             const std::string& nome);
};