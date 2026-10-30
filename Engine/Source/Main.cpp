#include <SFML/GpuPreference.hpp>
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