//
//  Treasure.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#include "Treasure.hpp"
#include <iostream>
using namespace std;

/** Consrtuctor should assign a unique treasure name at instantiation */
Treasure::Treasure(int nameIndex) {
    name = possibleNames[nameIndex];
}

string Treasure::getName(void) {
    return name;
}

void Treasure::printName(void) {
    cout << name << endl;
}

vector<string> Treasure::getPossibleNames() {
    return possibleNames;
}

// returns the possibleNames vector after shuffling
vector<string> Treasure::getShuffledNames() {
    vector<string> namesCopy = possibleNames;
    // TODO: test shuffled array. Find out if array is a copy, or the same memory location
    cout << "VECTOR FUNCTIONS" << namesCopy.size() << endl;
    cout << "vector shuffle" << endl;
    
    // shuffle array by swapping random element with last element
    for (int i = static_cast<int>(namesCopy.size()); i > 0; i--) {
        int randomIndex = rand() % i;
        
        string temp = namesCopy[i];
        namesCopy[i] = namesCopy[randomIndex];
        namesCopy[randomIndex] = temp;
    }
    
    return namesCopy;
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
