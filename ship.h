#ifndef SHIP_H
#define SHIP_H

#include <array>

enum class SpaceshipType{
    MEGASHIP,
    MEGAUFO,
    UFO,
    SHIP,
    DEBRIS,
    COUNT,
};

struct SpaceshipProperty{
    SpaceshipType type;
    std::string name;
    int speed;
    int size;
    int rarity;
};


const std::array<SpaceshipProperty, static_cast<int>(SpaceshipType::COUNT)> SpaceshipProperties =
{
    {
        { SpaceshipType::MEGASHIP, "megaship", 20, 100, 1 },
        { SpaceshipType::MEGAUFO, "megaufo", 100, 20, 10 },
        { SpaceshipType::UFO, "ufo", 35, 35, 100 },
        { SpaceshipType::SHIP, "ship", 100, 20, 10 },
        { SpaceshipType::DEBRIS, "debris", 35, 35, 100 }
    }
};

class Ship
{
private:
    SpaceshipProperty status_;

public:
    Ship( );
    Ship( const SpaceshipProperty& property );
    ~Ship( );

    void showType( );
};



#endif