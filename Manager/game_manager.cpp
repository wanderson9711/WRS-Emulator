#include "game_manager.h"

void GameManager::ScanGames(const std::string& folder)
{
    auto games = scanner.ScanFolder(folder);

    for (const auto& game : games)
    {
        library.AddGame(game);
    }
}

Library& GameManager::GetLibrary()
{
    return library;
}
