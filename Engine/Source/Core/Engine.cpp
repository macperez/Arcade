#include "Core/EngineConfig.h"
#include "Core/Engine.h"
#include "Utils/Log.h"

Engine::Engine() : 
    window_(sf::VideoMode(sf::Vector2u(gConfig.windowSize)), gConfig.windowTitle), 
    context_(window_)
{
    window_.setIcon(sf::Image("Content/Textures/Icon.png"));
    window_.setMinimumSize(window_.getSize() / 2u);
    window_.setKeyRepeatEnabled(false);
    if (gConfig.disableSfmlLogs)
    {
        sf::err().rdbuf(nullptr);
    }


    context_.audio.SetGlobalVolume(gConfig.globalVolume);

    LOG_INFO("Window created");
    
    
}


bool Engine::IsRunning() const 
{
    return window_.isOpen();
}


void Engine::ProcessEvents()
{
    while(const std::optional<sf::Event> event = window_.pollEvent())
    {

        event ->visit( EngineVisitor{*this} );
        
    }
}

void Engine::Update()
{
    context_.time.Update();
}

void Engine::Render()
{
    window_.clear();

    context_.renderer.BeginDrawing();
    window_.draw(sf::Sprite(context_.renderer.FinishDrawing())); 
    window_.display();
}



void Engine::EventWindowClose()
{
    window_.close();
    LOG_INFO("Window closed to {:.2f} seconds", context_.time.GetElapsedTime());

}

void Engine::EventWindowResized(sf::Vector2u size)
{
 
    LOG_INFO("Window resized to {}x{}", size.x, size.y);

}



void Engine::EventWindowFocusGained()
{

    LOG_INFO("Window focus Gained");

}


void Engine::EventWindowFocusLost()
{

    LOG_INFO("Window focus lost");

}

void Engine::EventGamePadConnected(int id)
{

    LOG_INFO("Gamepad {} connected", id);

}


void Engine::EventGamePadDisconnected(int id)

{

    LOG_INFO("Gamepad {} disconnected", id);

}


void Engine::EventWindowScreenshot() const
{
    context_.screenshot.Take();
}
