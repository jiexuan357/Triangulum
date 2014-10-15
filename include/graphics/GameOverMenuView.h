#ifndef GAMEOVERMENUVIEW_H
#define GAMEOVERMENUVIEW_H

#include "SFML/Graphics/Text.hpp"
#include "components/IMenu.h"

class GameOverMenuView
      : public IMenu
{
public:

   GameOverMenuView();

   void update(const KeyHandler &keyHandler,
               entityx::EventManager& eventManager);

   void draw(sf::RenderWindow& window);

   void onConfirm(entityx::EventManager& eventManager);

   void onCancel(entityx::EventManager &eventManager);

private:

   sf::Text m_text;
};

#endif // GAMEOVERMENUVIEW_H
