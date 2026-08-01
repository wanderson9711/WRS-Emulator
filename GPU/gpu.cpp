#include "gpu.h"
#include <iostream>

void GPU::iniciar() {

    largura = 480;
    altura = 272;

    std::cout << "GPU iniciada!" << std::endl;
    std::cout << "Resolucao PSP: "
              << largura << "x"
              << altura << std::endl;

}


void GPU::desenhar() {

    std::cout << "Tela renderizada!" << std::endl;

}
