//
//  main.cpp
//  kevins-cpp-command-line-project
//
//  Created by Kevin Miller on 5/31/21.
//

#include <iostream>
#include <cstdlib> // for rng

using namespace std;


const int player_count = 4;
int current_player = 1;

class Side {
public:
    Side() {
        
    }

    void setSidesArr(int index, bool open) {
        _sidesArr[index] = open;
    }
    void printSidesArr() {
        cout << _sidesArr << endl;
        cout << _sidesArr[0] << ", " << _sidesArr[1] << ", " << _sidesArr[2] << ", " << _sidesArr[3] << endl;
    }

private:
    bool isOpen;
    bool _sidesArr[4];
};


class Tile {
public:
    Tile() {
        // first create a new Side object, which has an array of 4 sides
        _sides = new Side;
        cout << "sides" << _sides << endl;
        
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
        _sides->printSidesArr();
    }
    
    Side* getSides() {
        _sides->printSidesArr();
        return _sides;
    }
    bool getIsMovable() {
        return isMovable;
    }
    void setIsMovable(bool movable) {
        isMovable = movable;
    }

private:
    bool isMovable;
    Side* _sides;
    bool containsPlayer;
    bool containsItem;
    string item;
};


class Board {
public:
    Board() {
        // constructor. create a new array size 8, consisting of pointers to Tiles (pointers are arrays)
        _board = new Tile*[8];
        for (int i = 0; i < 8; i++) {
            // then for each item in the array, initialize to a Tile array size 8
            _board[i] = new Tile[8];
        }
        for (int j = 0; j < 8; j++) {
            cout << _board[0]->getSides();
            for (int k = 0; k < 8; k++) {
                Tile* currentTile = &_board[j][k];
                cout << currentTile << endl;
//                cout << "board[j][k] " << &_board[j][k] << endl;
            }
        }
    }
    
    // outputs a 2 dimensional Tile** array
    Tile** getBoard(void) {
        cout << "get board function" << endl;
        cout << _board;
        return _board;
    }

private:
    Tile** _board;
};


class Treasure {
private:
    string name;
public:
    string getName(void) {
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
};


class Card {
private:
    Treasure depictedTreasure;
public:
    Treasure getDepictedTreasure() {
        return depictedTreasure;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Player!" << endl;
    cout << "Here is the board." << endl;
    
    Board labyrinth;    // could also do Board* labyrinth = new Board(); labyrinth->getBoard();
    labyrinth.getBoard();
    
    return 0;
}
