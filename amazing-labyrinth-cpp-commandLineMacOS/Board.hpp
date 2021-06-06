//
//  Board.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/1/21.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include "Tile.hpp"
#include <iostream>


class Board {
private:
    Tile** _board;

public:
    Board();
    Tile** getBoard(void);
};

#endif /* Board_hpp */
