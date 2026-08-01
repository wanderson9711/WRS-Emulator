#include "gpu.h"
#include <iostream>

void GPU::iniciar() {

    largura = 480;
    altura = 272;

    tela.limpar();

    std::cout << "GPU iniciada!" << std::endl;
    std::cout << "Resolucao PSP: "
              << largura << "x"
              << altura << std::endl;

}


void GPU::desenhar() {

    std::cout << "Desenhando framebuffer na tela..." << std::endl;

}
