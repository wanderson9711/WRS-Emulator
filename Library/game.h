#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
public:
    std::string titulo;
    std::string console;
    std::string caminho;
    std::string capa;

    Game() = default;

    Game(const std::string& t,
         const std::string& c,
         const std::string& p,
         const std::string& cp)
        : titulo(t), console(c), caminho(p), capa(cp) {}
};

#endif
