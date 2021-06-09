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
Treasure::Treasure() {
    shuffleNames();
}

string Treasure::getName(int nameIndex) {
    return possibleNames[nameIndex];
}

void Treasure::printName(int nameIndex) {
    cout << possibleNames[nameIndex] << endl;
}

vector<string> Treasure::getPossibleNames() {
    return possibleNames;
}

/** returns the possibleNames vector after shuffling */
void Treasure::shuffleNames() {
    // TODO: test shuffled array. Find out if array is a copy, or the same memory location
    // shuffle array by swapping random element with last element
    for (int i = static_cast<int>(possibleNames.size()); i > 0; i--) {
        int randomIndex = rand() % i;
        string temp = possibleNames[i];
        possibleNames[i] = possibleNames[randomIndex];
        possibleNames[randomIndex] = temp;
    }
}
