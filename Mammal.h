#include<string>
#include "Animal.h"
using namespace std;

#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal: public Animal{
private:
string furColor;

public:
Mammal();
Mammal(string, int, bool, string);
~Mammal();

void setFurColor(string);
string getFurColot();
};
#endif
