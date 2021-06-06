//
//  Side.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#ifndef Side_hpp
#define Side_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib> // for rng
using namespace std;

#endif /* Side_hpp */

class Side {
public:
    void setSidesArr(int index, bool open);
    void printSidesArr();

private:
    bool isOpen;
    bool _sidesArr[4];
};
