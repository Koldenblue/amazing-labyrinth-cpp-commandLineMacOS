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
        playerNum[i] = unique_ptr<Player>(new Player(playerColor, i));
    }

    // Create a randomized treasure deck
    Treasure treasureList;
    // deal to each player from the randomized deck
    vector<string> possibleNamesVector = treasureList.getPossibleNames();
    for (int j = 0; j < player_count; j++) {
        cout << "playerNum[j] is the color " << playerNum[j]->getPlayerColor() << endl;
        playerNum[j]->dealDeck(player_count, possibleNamesVector);
    }
    
    // create the board layout.

    // place the player pieces at board locations.
    
    // have each player draw a card.
    
    // start turn sequence - a player shifts the board, then moves a piece. Board cannot be shifted in opposite direction to previous turn. If player moves to treasure, player draws next card. If no more cards, player mush go home to win.
    
    
//    // Player Deck Tests
//    for (int x = 0; x < (24 / player_count); x++) {
//        cout << "card in deck 1 :" << playerNum[0]->getPlayerDeck()[x] << endl;
//    }
//
//    for (int x = 0; x < (24 / player_count); x++) {
//        cout << "card in deck 2 :" << playerNum[1]->getPlayerDeck()[x] << endl;
//    }
//
    
    return 0;
}

