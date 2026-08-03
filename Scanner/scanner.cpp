#include "scanner.h"

#include <filesystem>

std::vector<std::string> Scanner::ScanFolder(const std::string& folderPath)
{
    std::vector<std::string> games;

    for (const auto& file : std::filesystem::directory_iterator(folderPath))
    {
        std::string ext = file.path().extension().string();

if (ext == ".iso" ||
    ext == ".cso" ||
    ext == ".pbp")
{
    games.push_back(file.path().filename().string());
}
        {
            games.push_back(file.path().filename().string());
        }
    }

    return games;
}
