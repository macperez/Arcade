#pragma once
 
#include <SFML/Window/Event.hpp>
#include "Core/EngineContext.h"


class Scene 
{
    protected: 
        EngineContext& ctx;
    
    public: 
        Scene(EngineContext& context) : ctx(context) {}
        virtual ~Scene() = default; 
        virtual void Start() = 0; 
        virtual void Update() = 0; 
        virtual void Render() const = 0;  // const due to render does not change object's status 

        virtual void OnEvent(const sf::Event&) {}; // optional 
        virtual void OnPause(bool/* paused */) {}; 
        virtual void OnCleanup() {}; 

};

