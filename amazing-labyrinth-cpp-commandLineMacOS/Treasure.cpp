//
//  Treasure.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#include "Treasure.hpp"
#include <iostream>
using namespace std;

/** Should assign a unique treasure name at instantiation */
Treasure::Treasure(int nameIndex) {
    setName(nameIndex);
}

string Treasure::getName(void) {
    return name;
}

void Treasure::setName(int nameIndex) {
    name = possibleNames[nameIndex];
}

void Treasure::printName(void) {
    cout << name << endl;
}
/** =================== Treasure Names =====================
 Genie in a Bottle
 Skull and Bone
 Ornate Sword
 Laughing Pig
 Giant Lizard
 Bag of Gold
 Emerald
 Fairy
 Knight's Helmet
 Key Ring
 Dragon
 Owl
 Menorah
 Music Box
 Jeweled Crown
 Scarab Beetle
 Holy Book
 Ghost
 Moth
 Spider
 Map
 Mouse
 Ring
 Bat
 */
