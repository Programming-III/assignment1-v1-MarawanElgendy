#include<string>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
private:
string name;
int age;
bool isHungry;

public:
Animal();
Animal(string, int, bool);
~Animal();

void setName(string);
void setAge(int);
void setIsHungry(bool);

string getName();
int getAge();
bool getIsHungry();

void display();
void feed();
};
#endif
