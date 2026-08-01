#ifndef CPU_H
#define CPU_H

class CPU {
public:
    int registradores[32];

    void iniciar();
    void executar();
};

#endif
