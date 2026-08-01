#ifndef SYSTEM_H
#define SYSTEM_H

#include "../CPU/cpu.h"
#include "../Memory/memory.h"
#include "../GPU/gpu.h"
#include "../Input/input.h"

class System {

public:

    CPU cpu;
    Memory memoria;
    GPU gpu;
    Input controle;

    void iniciar();

};

#endif
