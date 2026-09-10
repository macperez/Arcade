#pragma once

#include <SFML/Window/Event.hpp>



struct EngineVisitor 
{
    /* esto es una 'forward declaration' ya que necesitamos
    evitar dependencias circulares que el compilador rechazará. 
    En este caso tenemos EngineVisitor que incluye a Engine,
    pero en Engine tenemos un EngineVisitor. con las cabeceras circulares
    Poniendo 'class' se declara la dirección de declaración. 
    Fíjate que no se incluye "Engine.h". La dirección es clara */
    
    class Engine& engine; 

    void operator()(const sf::Event::Closed&);
    void operator()(const auto&) {}
    
};