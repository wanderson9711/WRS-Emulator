#include "cpu.h"
#include <iostream>

void CPU::iniciar() {

    for(int i = 0; i < 32; i++) {
        registradores[i] = 0;
    }

    std::cout << "CPU iniciada!" << std::endl;
}


void CPU::executar() {

    std::cout << "Executando instrucoes da CPU..." << std::endl;

}
