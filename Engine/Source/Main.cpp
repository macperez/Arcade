#include <SFML/GpuPreference.hpp>
#include <SFML/System/Sleep.hpp>
#include "Core/Engine.h"


SFML_DEFINE_DISCRETE_GPU_PREFERENCE

int main()
{
    
    try
    {
        // Tu código actual:
        // construcción del motor, ejecución, etc.
        Engine engine; 

        while (engine.IsRunning())
        {
            engine.ProcessEvents();

            if (!engine.HasFocus())
            {
                sf::sleep(sf::milliseconds(10));
                continue; 
            }

            engine.Update();
            engine.Render();
        }

    }
    catch (const tgui::Exception& e)
    {
        std::cerr << "Error de TGUI: " << e.what() << std::endl;
        return 1;
    }




}