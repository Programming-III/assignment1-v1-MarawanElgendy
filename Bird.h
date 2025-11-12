#include<string>
#include "Animal.h"
using namespace std;

#ifndef BIRD_H 
#define BIRD_H

class Bird: public Animal{
private:
float wingSpan;

public:
Bird();
Bird(string, int, bool, float);
~Bird();

void setWingSpan(float);
float getWingSpan();
};
#endif
