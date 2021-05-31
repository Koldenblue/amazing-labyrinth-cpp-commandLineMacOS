//
//  main.cpp
//  kevins-cpp-command-line-project
//
//  Created by Kevin Miller on 5/31/21.
//

#include <iostream>
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
    Side sides[4];
};


class Board {
public:

private:
    Tile board[8][8];
};




int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Player!\n" << endl;
    
    Board* labyrinth = new Board;
    
    
}
