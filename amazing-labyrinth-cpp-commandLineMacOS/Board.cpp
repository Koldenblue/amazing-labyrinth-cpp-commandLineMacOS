//
//  Board.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/1/21.
//

#include "Board.hpp"

Board::Board() {
    // constructor. create a new array size 8, consisting of pointers to Tiles (pointers are arrays)
    _board = new Tile*[8];
    for (int i = 0; i < 8; i++) {
        // then for each item in the array, initialize to a Tile array size 8
        _board[i] = new Tile[8];
    }

    // loop through 2d array, creating a new pointer to a Tile for each array location
    for (int j = 0; j < 8; j++) {
        for (int k = 0; k < 8; k++) {
            // should this be &??
            Tile* currentTile = &_board[j][k];
//            cout << currentTile->getSides();
//            cout << ", Board.cpp, board[j][k], " << currentTile << endl;
        }
    }
    // TODO: print out graphic board
}


// outputs a 2 dimensional Tile** array
Tile** Board::getBoard(void) {
//    cout << "get board function" << endl;
//    cout << _board;
    return _board;
}
