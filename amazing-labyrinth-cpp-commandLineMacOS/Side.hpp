//
//  Side.hpp
//  amazing-labyrinth-cpp-commandLineMacOS
//
//  Created by Kevin Miller on 6/2/21.
//

#pragma once
//pragma replaces the ifndef, def, and endif statements

#include <stdio.h>
#include <iostream>
#include <cstdlib> // for rng
using namespace std;


class Side {
private:
    bool isOpen;
    bool _sidesArr[4];
    
public:
    void setSidesArr(int index, bool open);
    void printSidesArr();
    string to_string();

};
