//
//  Treasure.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#ifndef Treasure_hpp
#define Treasure_hpp

#include <stdio.h>
#include <string>
#include <vector> // for resizable arrays
using namespace std;


class Treasure {
private:
    string name;
    // There are 24 possible treasure names.
    vector<string> possibleNames = {
        "Genie in a Bottle",
        "Skull and Bone",
        "Ornate Sword",
        "Laughing Pig",
        "Giant Lizard",
        "Bag of Gold",
        "Emerald",
        "Fairy",
        "Knight's Helmet",
        "Skeleton Key Ring",
        "Pet Dragon",
        "Wise Owl",
        "Magic Menorah",
        "Soothing Music Box",
        "Jeweled Crown",
        "Scarab Beetle",
        "Holy Book",
        "Ghost",
        "Giant Moth",
        "Spinning Spider",
        "Map",
        "Mouse",
        "Ruby Ring",
        "Bat"
    };

public:
    Treasure(int nameIndex);
    string getName(void);
    void setName(int nameIndex);
    void printName(void);
};

#endif /* Treasure_hpp */
