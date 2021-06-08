//
//  Player.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/6/21.
//

#include "Player.hpp"
using namespace std;

Player::Player(string color) {
    setPlayerColor(color);
}

void Player::setPlayerColor(string color) {
    playerColor = color;
}

string Player::getPlayerColor() {
    return playerColor;
}

void Player::dealDeck(int numPlayers) {
    // first randomize the order of the treasure deck
    
    // then give each player an equal number of treasure cards in their deck
}
