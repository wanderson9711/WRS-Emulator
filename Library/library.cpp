#include "library.h"
#include <iostream>

void Library::adicionar(const Game& jogo) {
    jogos.push_back(jogo);
}

void Library::listar() {

    std::cout << "\n===== Biblioteca =====\n";

    for (const auto& jogo : jogos) {
        std::cout << jogo.titulo
                  << " (" << jogo.console << ")"
                  << std::endl;
    }

}
