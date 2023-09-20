
//tower.h
#ifndef TOWER_H
#define TOWER_H

class Tower {
private:
    int height;
public:
    Tower(int h = 1);
    int getHeight();
};

#endif 

//tower.cpp
#pragma once
#include "pgm.h"
#ifndef TOWER_H
#define TOWER_H

class Tower {
private:
    int height;
public:
    Tower(int h = 1);
    int getHeight();
};
#endif

//pgm.h
#ifndef PGM_H
#define PGM_H

#include <iostream>
using namespace std;

#endif 

//main.cpp
#include "pgm.h"
#include "tower.h"

int main() {
   Tower myTower;
   Tower seoulTower(100);

   cout << "높이는 " << myTower.getHeight() << "미터" << endl;
   cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

   return 0;
}
