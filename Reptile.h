#include<string>
#include "Animal.h"
using namespace std;

#ifndef REPTILE_H
#define REPTILE_H

class Reptile: public Animal{
private:
bool isVenomous;

public:
Reptile();
Reptile(string, int, bool, bool);
~Reptile();

void setIsVenomous(bool);
bool getIsVenomous();
};
#endif
