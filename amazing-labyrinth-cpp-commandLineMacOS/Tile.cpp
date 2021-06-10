//
//  Tile.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#include "Tile.hpp"
// Side.hpp already included Tile.hpp

/** Constructor for a tile object, which has an bool array of 4 sides, which can be either open or closed */
Tile::Tile() {
    // first create a new Side object, which has an array of 4 sides
    _sides = new Side;
//        cout << "sides" << _sides << endl;s
    
    // randomly generate which sides of the tile are open,
    // while making sure that at least one side is open.
    bool hasOneSideOpen = false;
    while (hasOneSideOpen == false) {
        for (int i = 0; i < 4; i++) {
            // set the sides array to contain the isOpen results.
            //TODO
            bool isOpen;
            if ( (rand() % 2) == 1) {
                isOpen = true;
                hasOneSideOpen = true;
                _sides->setSidesArr(i, isOpen);
            }
            else {
                isOpen = false;
            }
        }
    }
//    _sides->printSidesArr();
}

/** Prints out the 4 sides of a tile, open or closed */
string Tile::getSides() {
    return _sides->to_string();
}

bool Tile::getIsMovable() {
    return isMovable;
}
void Tile::setIsMovable(bool movable) {
    isMovable = movable;
}

