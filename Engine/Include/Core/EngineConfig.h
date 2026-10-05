#pragma once

#include <string>
#include <SFML/System/Vector2.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Color.hpp>


struct EngineConfig 
{
    std::string windowTitle; 
    sf::Vector2f windowSize; 
    bool disableSfmlLogs;
    sf::Time maximumDeltaTime; 
    float globalVolume; 
    sf::Color backgroundColor; 
    float cursorRadius; 
    float cursorSpeed; 
    sf::Color cursorColor;
    float joystickDeadzone; 

    EngineConfig();

};



inline const EngineConfig gConfig; 