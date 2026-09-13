#pragma once

#include <string>
#include <SFML/System/Vector2.hpp>


struct EngineConfig 
{
   std::string windowTitle; 

   sf::Vector2f windowSize; 

   bool disableSfmlLogs;

    EngineConfig();

};



inline const EngineConfig gConfig; 