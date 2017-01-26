#include "ship.h"
#include <iostream>

//Ship implement
Ship::Ship( ){ }

Ship::Ship( const SpaceshipProperty& property )
:status_( property )
{
}

Ship::~Ship( ){ };


void Ship::showType( )
{
    std::cout << status_.name << std::endl;
}