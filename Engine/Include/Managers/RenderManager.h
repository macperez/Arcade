#pragma once 

#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Graphics/Effect.h"


 class RenderManager 
 {
    private: 
        sf::RenderTexture target_; 
        sf::Texture backgroundTexture_; 
        sf::RectangleShape background_; 
        std::vector<std::unique_ptr<Effect>> effects_;
        sf::RenderTexture effectsTarget_; 
        

    public:
        RenderManager();

        void Draw(const sf::Drawable & drawable); 
        void SetView(const sf::View& view); 
        void ResetView(); 

    private:
        friend class Engine; 
        void BeginDrawing(); 
        const sf::Texture& FinishDrawing();

 };