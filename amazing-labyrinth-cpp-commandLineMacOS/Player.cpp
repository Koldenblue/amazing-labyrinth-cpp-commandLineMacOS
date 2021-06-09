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

vector<string> Player::getPlayerDeck() {
    return playerDeck;
}

void Player::dealDeck(int numPlayers, vector<string> treasures) {

    // There are 24 cards in the deck. numPlayers varies from 2 to 4.
    int cardsInDeck = 24 / numPlayers;
    int startCard = playerNumber * cardsInDeck;
    
    // finally, add the shuffled cards to the player deck.
    for (int i = startCard, j = startCard + cardsInDeck; i < j; i++) {
        playerDeck[i] = treasures[i];
    }
}
