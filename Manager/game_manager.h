#pragma once

#include "../Scanner/scanner.h"
#include "../Library/library.h"

class GameManager
{
public:
    void ScanGames(const std::string& folder);

    Library& GetLibrary();

private:
    Scanner scanner;
    Library library;
};
