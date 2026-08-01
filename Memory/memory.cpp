#include "memory.h"
#include <iostream>

void Memory::limpar() {

    for(int i = 0; i < 1024 * 1024; i++) {
        RAM[i] = 0;
    }

    std::cout << "Memoria RAM limpa!" << std::endl;

}
