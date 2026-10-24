#pragma once

#include <SFML/Graphics.hpp>
#include "Core/EngineVisitor.h"
#include "Core/EngineContext.h"
#include "Core/Overlay.h"
#include "Scene/SceneFactory.h"

class Engine 
{
    private: 

        sf::RenderWindow window_; 
        EngineContext context_; 
        SceneFactory::Scenes scenes_;
        Scene* currentScene_; 
        Overlay overlay_;
        bool cursorWasVisible_; 
        

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
        void EventGamePadConnected(int id);
        void EventGamePadDisconnected(int id);
        void EventWindowScreenshot() const;
        void EventSceneChange(const std::string &name); 
        void EventSceneRestart(); 
        void EventSceneMenuReturn(); 
        void EventOverlayPauseToggle(); 
        void EventOverlaySelect(OverlaySelection selection); 

        
};