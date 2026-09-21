#pragma once 

#include <SFML/System/string.hpp> 

class ClipboardManager
{
    void SetString(const sf::String& text);
    sf::String GetString() const;
};