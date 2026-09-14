#pragma once

#include <SFML/Graphics.hpp>
#include "Core/EngineVisitor.h"
#include "Core/EngineContext.h"


class Engine 
{
    private: 

        sf::RenderWindow window_; 
        EngineContext context_; 

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
        void EventWindowResized(sf::Vector2u size) ;
        void EventWindowFocusGained();
        void EventWindowFocusLost();
        
};