#include "scanner.h"

#include <filesystem>

std::vector<std::string> Scanner::ScanFolder(const std::string& folderPath)
{
    std::vector<std::string> games;

    for (const auto& file : std::filesystem::directory_iterator(folderPath))
    {
        if (file.path().extension() == ".iso")
        {
            games.push_back(file.path().filename().string());
        }
    }

    return games;
}
