#include "iso.h"
#include <iostream>
#include <fstream>

bool ISO::carregar(std::string caminho) {

    std::ifstream arquivo(caminho);

    if(arquivo.is_open()) {

        nome = caminho;

        std::cout << "ISO carregada: " << nome << std::endl;

        arquivo.close();

        return true;
    }

    std::cout << "Erro ao carregar ISO!" << std::endl;

    return false;
}
