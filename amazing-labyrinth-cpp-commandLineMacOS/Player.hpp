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
using namespace std;


class Player {
private:
    string playerColor;
    
public:
    Player(string color);
    void setPlayerColor(string color);
    string getPlayerColor();
    void dealDeck(int numPlayers);
};

#endif /* Player_hpp */
