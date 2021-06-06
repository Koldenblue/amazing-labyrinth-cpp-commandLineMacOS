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
#include "Treasure.hpp"
using namespace std;


const int player_count = 4;
int current_player = 1;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Player!" << endl;
    cout << "Here is the board." << endl;
    
    Board labyrinth;    // could also do Board* labyrinth = new Board(); labyrinth->getBoard();
    labyrinth.getBoard();
    
    
    
    // TREASUrE NAME TESTS
    Treasure testTreasure(1);
    Treasure testTreasure2(25);
    cout << "Treasure index 1:" << endl;
    testTreasure.printName();
    cout << "Treasure index 2:" << endl;
    testTreasure2.printName();
    string testName = testTreasure2.getName();
    cout << "TTTTTTT" << testName << endl;
    if (testName == "" ) {
        cout << "TRUE" ;
    }
    return 0;
}
