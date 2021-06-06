//
//  Tile.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#ifndef Tile_hpp
#define Tile_hpp

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib> // for rng
#include <iostream>
using namespace std;

#include "Side.hpp"

class Tile {
public:
    Tile();
    string getSides();
    bool getIsMovable();
    void setIsMovable(bool movable);

private:
    bool isMovable;
    Side* _sides;
    bool containsPlayer;
    bool containsItem;
    string item;
};

#endif /* Tile_hpp */

