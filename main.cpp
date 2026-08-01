#include <iostream>
#include "CPU/cpu.h"
#include "Memory/memory.h"
#include "ISO/iso.h"

int main() {

    std::cout << "=========================\n";
    std::cout << "     WRS PSP Emulator\n";
    std::cout << "=========================\n\n";

    CPU processador;
    Memory memoria;
    ISO jogo;

    memoria.limpar();

    processador.iniciar();
    processador.executar();

    std::cout << "Sistema pronto para carregar jogos!\n";

    return 0;
}
