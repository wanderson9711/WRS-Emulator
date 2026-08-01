#include <iostream>
#include "CPU/cpu.h"

int main() {

    std::cout << "=========================\n";
    std::cout << "     WRS PSP Emulator\n";
    std::cout << "=========================\n\n";

    CPU processador;

    processador.iniciar();
    processador.executar();

    return 0;
}
