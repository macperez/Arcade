#pragma once

#include <SFML/Graphics.hpp>
#include "Core/EngineVisitor.h"


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
    
    private: 
        // con esto te saltas la privacidad de Engine a los ojos de EngineVisitor
        // pero haremos la excepción ya que es una extensión de Engine, 
        // así tiene acceso a los métodos privados de Engine. 
        
        friend EngineVisitor; 

        
        void EventWindowClose();
        
};