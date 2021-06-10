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
#include "Player.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int player_count = 0;           // Number of participants
    int current_player = 0;
    
    cout << "=========== Hello, Player! =============" << endl;
    cout << "Here is the board." << endl;

    // Create a new board.
    Board labyrinth;
    labyrinth.getBoard();
    
    // Get number of players participating.
    while (player_count < 2 || player_count > 4) {
        cout << "Number of players? Must be 2 - 4 players." << endl;
        cin >> player_count;
        // clear buffer - if a char rather than int gets entered, the cin buffer doesn't clear
        cin.clear();
        // make sure a new line gets printed if a char gets entered
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (player_count < 2 || player_count > 4) {
            cout << "Must be 2-4 players." << endl;
        } else {
            cout << "number of players is " << player_count << "." << endl;
        }
    }
    
    // get number of players and the color for each of them. Put each player object in the playerNum array
    unique_ptr<Player> playerNum[player_count];
    for (int i = 0; i < player_count; i++) {
        string playerColor;
        cout << "What color is player " << i << "?" << endl;
        getline (cin, playerColor);
        // smart pointer instead of just new Player(playerColor)
        playerNum[i] = unique_ptr<Player>(new Player(playerColor, i));
    }

    // Create a randomized treasure deck
    Treasure treasureList;
    // deal to each player from the randomized deck
    vector<string> possibleNames = treasureList.getPossibleNames();
    for (int j = 0; j < player_count; j++) {
        cout << "playerNum[j]" << playerNum[j] << endl;
        playerNum[j]->dealDeck(player_count, possibleNames);
    }
    
    for (int x = 0; x < (24 / player_count); x++) {
        cout << "card in deck  :" << playerNum[0]->getPlayerDeck()[x] << endl; // ERROR HERE
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

