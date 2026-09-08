#include "Core/Engine.h"

Engine::Engine() : 
    window_(sf::VideoMode(){800, 800}, "Arcade Engine")
{
    window_.setIcon(sf::Image("Content/Textures/Icon.png"));
}