#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "game.h"

class Library {
public:
    std::vector<Game> jogos;

    void adicionar(const Game& jogo);
    void listar();
};

#endif
