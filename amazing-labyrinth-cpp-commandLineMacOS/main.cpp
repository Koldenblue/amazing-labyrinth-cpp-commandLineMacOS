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


int player_count = 0;
int current_player = 1;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Player!" << endl;
    cout << "Here is the board." << endl;
    
    // Create a new board.
    Board labyrinth;    // could also do Board* labyrinth = new Board(); labyrinth->getBoard();
    labyrinth.getBoard();
    
    // Get number of players participating.
    while (player_count < 2 || player_count > 4) {
        cout << "Number of players? Must be 2 - 4 players." << endl;
        cin >> player_count;
        // clear buffer - if a char gets entered, the cin buffer doesn't clear
        cin.clear();
        // make sure a new line gets printed if a char gets entered
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (player_count < 2 || player_count > 4) {
            cout << "Must be 2-4 players." << endl;
        }
        {
            cout << "number of players is " << player_count << endl;
        }
    }
    
    // TODO: create players, deal hands
    for (int i = 0; i < player_count; i++) {
        
    }
    
    // TREASURE NAME TESTS
//    Treasure testTreasure(1);
//    Treasure testTreasure2(25);
//    cout << "Treasure index 1:" << endl;
//    testTreasure.printName();
//    cout << "Treasure index 2:" << endl;
//    testTreasure2.printName();
//    string testName = testTreasure2.getName();
//    cout << "TTTTTTT" << testName << endl;
//    if (testName == "" ) {
//        cout << "TRUE" ;
//    }
    return 0;
}
