#include <iostream>
#include "System/system.h"

int main() {

    std::cout << "=========================\n";
    std::cout << "     WRS PSP Emulator\n";
    std::cout << "=========================\n\n";

    System psp;

    psp.iniciar();

    std::cout << "Emulador pronto!\n";

    return 0;
}
