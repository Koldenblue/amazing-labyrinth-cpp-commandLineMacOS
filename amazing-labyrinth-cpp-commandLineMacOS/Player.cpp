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
