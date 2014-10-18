#ifndef EVENTS_H
#define EVENTS_H

#include "SFML/Window/Keyboard.hpp"
#include "entityx/Event.h"
#include "entityx/Entity.h"
#include "SoundId.h"

struct EvStartGame : public entityx::Event<EvStartGame>
{
   EvStartGame() {}
};

struct EvInit : public entityx::Event<EvInit>
{
   EvInit(int _levelNr, int _score)
   : levelNr(_levelNr)
   , score(_score)
   {
   }

   int levelNr;
   int score;
};

struct EvPauseGame : public entityx::Event<EvPauseGame>
{
   EvPauseGame() {}
};

struct EvResumeGame : public entityx::Event<EvResumeGame>
{
   EvResumeGame() {}
};

struct EvGameOver : public entityx::Event<EvGameOver>
{
   EvGameOver() {}
};

struct EvBossKilled : public entityx::Event<EvBossKilled>
{
   EvBossKilled() {}
};

struct EvPlaySound : public entityx::Event<EvPlaySound>
{
   EvPlaySound(SoundId _id)
   : id(_id)
   {
   }

   SoundId id;
};

struct EvPlayMusic : public entityx::Event<EvPlayMusic>
{
   EvPlayMusic() {}
};

struct EvPauseMusic : public entityx::Event<EvPauseMusic>
{
   EvPauseMusic() {}
};


struct EvKeyboard : public entityx::Event<EvKeyboard>
{
   EvKeyboard(sf::Keyboard::Key _key, bool _isDown)
   : key(_key)
   , isDown(_isDown)
   {
   }

   sf::Keyboard::Key key;
   bool isDown;
};

struct EvReportScrollSpeed : public entityx::Event<EvReportScrollSpeed>
{
   EvReportScrollSpeed(double _scrollSpeed)
   : scrollSpeed(_scrollSpeed)
   {
   }

   double scrollSpeed;
};

struct EvReportSpaceShipId : public entityx::Event<EvReportSpaceShipId>
{
   EvReportSpaceShipId(entityx::Entity::Id _spaceShipId)
   : spaceShipId(_spaceShipId)
   {
   }

   entityx::Entity::Id spaceShipId;
};

#endif // EVENTS_H
