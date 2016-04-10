#ifndef SWIMMABLE_H
#define SWIMMABLE_H

#include "tilemap.h"
#include "Bases/enemy_mob.h"
#include "Bases/component.h"
#include "particle_system.h"

namespace Component
{

class Swimmable : public Component_Base
{
    public:
        Swimmable ( Tile_Map* map, Mob* mob, const bool canLand, Game& game );

        void
        logic   ( const float dt ) override;

    private:
        Tile_Map*           m_tileMap;
        Mob*                m_mob;

        const bool          m_canLand;

        sf::RenderWindow*   m_window;

        Particle_System     m_splash    { 100, sf::seconds( 1 ), sf::Color::White  };

        sf::Vector2f        m_prevMobPos;


};

}

#endif // SWIMMABLE_H
