#pragma once

#include <SFML/Graphics.hpp>



class Engine 
{
    private: 
        sf::RenderWindow window_; 

    public: 
        Engine();
        bool IsRunning() const; 
        void ProcessEvents();
        void Update(); 
        void Render();
        
};