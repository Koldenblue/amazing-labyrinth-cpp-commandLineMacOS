//
//  Card.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include "Treasure.hpp"


class Card {
private:
    Treasure depictedTreasure;

public:
//    Card();
    Treasure getDepictedTreasure();
};

#endif /* Card_hpp */
