#include <fstream>
#include <cassert>
#include <nlohmann/json.hpp>
#include "Core/EngineConfig.h"


EngineConfig :: EngineConfig ()
{
    std::ifstream file("Content/Config.json");
    assert(file); // assert(file.is_open());  también es válido
    nlohmann :: json json = nlohmann :: json :: parse(file);
    windowTitle  = json["windowTitle"];
    //windowSize.x  = json["windowSize"][0];
    //windowSize.y  = json["windowSize"][1];
    windowSize = {json["windowSize"][0], json["windowSize"][1]} ;
    disableSfmlLogs = json["disableSfmlLogs"];
}


