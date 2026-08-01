#include "framebuffer.h"
#include <iostream>

void FrameBuffer::limpar() {

    for(int i = 0; i < 480 * 272; i++) {

        pixels[i] = 0;

    }

    std::cout << "Framebuffer limpo!" << std::endl;

}
