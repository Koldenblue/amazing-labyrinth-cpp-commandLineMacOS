//
//  Player.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/6/21.
//

#include "Player.hpp"
#include "Treasure.hpp"
using namespace std;

Player::Player(string color, int playerNum) {
    playerColor = color;
    playerNumber = playerNum;
}


string Player::getPlayerColor() {
    return playerColor;
}

int Player::getPlayerNumber() {
    return playerNumber;
}

void Player::dealDeck(int numPlayers) {
    // first randomize the order of the treasure deck
    unique_ptr<Treasure> treasureList;
    vector<string> shuffledTreasures = treasureList->getShuffledNames();
    playerDeck
    
    // then give each player an equal number of treasure cards in their deck
}
