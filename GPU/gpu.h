#ifndef GPU_H
#define GPU_H

#include "framebuffer.h"

class GPU {

public:

    int largura;
    int altura;

    FrameBuffer tela;

    void iniciar();
    void desenhar();

};

#endif
