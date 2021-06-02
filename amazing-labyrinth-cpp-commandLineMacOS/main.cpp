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
    
private:
    bool isOpen;
    
};


class Tile {
public:
    Tile() {
        _sides = new Side[4];
        
        bool hasOneSideOpen = false;
        while (hasOneSideOpen == false) {
            for (int i = 0; i < 4; i++) {
                bool isOpen;
                if ( (rand() % 2) == 1) {
                    isOpen = true;
                    hasOneSideOpen = true;
                    cout << isOpen << endl;
                }
                else {
                    isOpen = false;
                    cout << isOpen << endl;
                }
            }
        }
    }

    bool containsPlayer;
    bool containsItem;
    string item;
    
    bool getIsMovable() {
        return isMovable;
    }
    void setIsMovable(bool movable) {
        isMovable = movable;
    }
private:
    bool isMovable;
    Side* _sides;
};


class Board {
public:
    Board() {
        _board = new Tile*[8];
        for (int i = 0; i < 8; i++) {
            _board[i] = new Tile[8];
        }
    }
    
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
    
    Board* labyrinth = new Board;
    labyrinth->getBoard();
    
    return 0;
}
