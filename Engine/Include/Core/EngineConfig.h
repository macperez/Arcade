#pragma once

#include <string>
#include <SFML/System/Vector2.hpp>
#include <SFML/System/Time.hpp>


struct EngineConfig 
{
    std::string windowTitle; 

    sf::Vector2f windowSize; 

    bool disableSfmlLogs;

    sf::Time maximumDeltaTime; 


    EngineConfig();

};



inline const EngineConfig gConfig; 