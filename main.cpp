#include <iostream>
#include "CPU/cpu.h"
#include "Memory/memory.h"

int main() {

    std::cout << "=========================\n";
    std::cout << "     WRS PSP Emulator\n";
    std::cout << "=========================\n\n";

    CPU processador;
    Memory memoria;

    memoria.limpar();

    processador.iniciar();
    processador.executar();

    return 0;
}
