#pragma once

#include <string> 
#include <unordered_map>
#include <optional>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Audio/Music.hpp>



class ResourceManager 
{
    private: 
        std::unordered_map<std::string, sf::Texture> textures_;
        std::unordered_map<std::string, sf::SoundBuffer> sounds_;
        std::unordered_map<std::string, sf::Font> fonts_;

    public: 
        sf::Texture * FetchTexture(const std::string & filename);

        sf::SoundBuffer * FetchSound(const std::string & filename);

        sf::Font * FetchFont(const std::string & filename);

        std::optional<sf::Music> FetchMusic(const std::string & filename);

};

