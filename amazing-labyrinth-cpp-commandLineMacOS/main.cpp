//
//  main.cpp
//  kevins-cpp-command-line-project
//
//  Created by Kevin Miller on 5/31/21.
//

#include <iostream>
#include <cstdlib> // for rng
#include "Tile.hpp"
#include "Board.hpp"
using namespace std;


const int player_count = 4;
int current_player = 1;





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
