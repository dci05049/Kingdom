#ifndef LIGHT_H
#define LIGHT_H

#include <SFML/Graphics.hpp>

class Light
{
    public:
        Light                   ( const sf::Vector2i& tileLocation, const unsigned intensity );

        void
        setTileLocation         ( const sf::Vector2i& tileLocation );

        const unsigned
        getIntensity            () const;

        const sf::Vector2i
        getLocation             () const;

        const sf::Color
        getLightFromIntensity   ( const sf::Vector2i& tileMapPos ) const;

    private:
        unsigned        m_intensity;    //How far it reaches

        sf::Vector2i    m_tileLocation;
};

#endif // LIGHT_H
