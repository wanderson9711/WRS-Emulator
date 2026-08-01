#include "system.h"
#include <iostream>

void System::iniciar() {

    std::cout << "Iniciando sistema WRS PSP..." << std::endl;

    memoria.limpar();

    cpu.iniciar();

    gpu.iniciar();

    controle.iniciar();

    std::cout << "Sistema iniciado com sucesso!" << std::endl;

}
