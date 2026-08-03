#include <iostream>
#include "System/system.h"
#include "Scanner/scanner.h"

int main()
{
    std::cout << "=========================\n";
    std::cout << "      WRS Emulator\n";
    std::cout << "=========================\n\n";

    System psp;
    psp.iniciar();

    Scanner scanner;

    std::string folder;

    std::cout << "\nDigite a pasta dos jogos: ";
    std::getline(std::cin, folder);

    auto games = scanner.ScanFolder(folder);

    std::cout << "\nJogos encontrados:\n\n";

    for (const auto& game : games)
    {
        std::cout << "- " << game << std::endl;
    }

    std::cout << "\nTotal: " << games.size() << " jogo(s).\n";

    return 0;
}
