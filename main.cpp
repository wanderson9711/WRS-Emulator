#include <iostream>

#include "CPU/cpu.h"
#include "Memory/memory.h"
#include "ISO/iso.h"
#include "Input/input.h"
#include "GPU/gpu.h"

int main() {

    std::cout << "=========================\n";
    std::cout << "     WRS PSP Emulator\n";
    std::cout << "=========================\n\n";

    CPU processador;
    Memory memoria;
    ISO jogo;
    Input controle;
    GPU grafico;

    memoria.limpar();

    processador.iniciar();

    controle.iniciar();

    grafico.iniciar();
    grafico.desenhar();

    processador.executar();

    std::cout << "Sistema pronto!\n";

    return 0;
}
