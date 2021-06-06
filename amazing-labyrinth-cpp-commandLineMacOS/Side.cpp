//
//  Side.cpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#include "Side.hpp"

void Side::setSidesArr(int index, bool open) {
    _sidesArr[index] = open;
}

void Side::printSidesArr() {
    cout << _sidesArr << endl;
    cout << _sidesArr[0] << ", " << _sidesArr[1] << ", " << _sidesArr[2] << ", " << _sidesArr[3] << endl;
}
