
#include <SFML/Window/Clipboard.hpp>
#include "Managers/ClipboardManager.h"




void ClipboardManager :: SetString(const sf::String& text)
{
    sf::Clipboard :: setString (text);
}


sf::String ClipboardManager::GetString() const
{
    return sf::Clipboard :: getString();
}