#include<string>
#include "Animal.h"
using namespace std;

#ifndef ENCLOSURE_H
#define ENCLOSURE_H

class Enclosure{
private:
Animal* animals;
int capacity;
int currentCount;

public:
Enclosure();
Enclosure(int);
~Enclosure();

void addAnimal(Animal*);
void displayAnimal();
};
#endif
