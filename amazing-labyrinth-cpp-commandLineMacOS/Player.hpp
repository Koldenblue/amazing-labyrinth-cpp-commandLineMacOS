//
//  Player.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/6/21.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Player {
private:
    string playerColor;
    vector<string> playerDeck;
    int playerNumber;
    
public:
    Player(string color, int playerNum);
    string getPlayerColor();
    vector<string> getPlayerDeck();
    int getPlayerNumber();
    void dealDeck(int numPlayers, vector<string> treasures);
};

#endif /* Player_hpp */
