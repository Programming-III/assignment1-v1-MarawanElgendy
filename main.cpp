#include<string>
#include<iostream>
#include <system_error>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

Animal::Animal(){}
Animal::Animal(string name,int age, bool isHungry ){
this->name = name;
this-> age = age;
this-> isHungry = isHungry;
}
Animal::~Animal(){}

void Animal::setName(string name){this->name = name;}
void Animal::setAge(int age){this->age = age;}
void Animal::setIsHungry(bool isHungry){this->isHungry = isHungry;}

string Animal::getName(){return name;}
int Animal::getAge(){return age;}
bool Animal::getIsHungry(){return isHungry;}

void Animal::display(){cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
    if (isHungry) {
    cout<<"Animal is Hungry"<<endl;
    }else{
        cout<<"Animal is not Hungry"<<endl;
    }
}
void Animal::feed(){
if (isHungry){
 cout<<"Animal is Fed"<<endl;
}else{
    cout<<"Animal is not Hungry"<<endl;
}
}


Mammal::Mammal():Animal(){}
Mammal::Mammal(string name, int age, bool isHungry,string furColor):Animal(name,age,isHungry){
    this->furColor = furColor;
}

Mammal::~Mammal(){}
void Mammal::setFurColor(string furColor){
   this->furColor = furColor;
}
string Mammal::getFurColot(){
return furColor;
}


Bird::Bird():Animal(){}
Bird::Bird(string name, int age, bool isHungry, float wingSpan):Animal(name, age, isHungry){
    this->wingSpan = wingSpan;
}
Bird::~Bird(){}

void Bird::setWingSpan(float wingSpan){
this->wingSpan = wingSpan;
}
float Bird:: getWingSpan(){
return wingSpan;
}


Reptile::Reptile():Animal(){}
Reptile::Reptile(string name, int age, bool isHungry, bool isVenomous):Animal(name, age, isHungry){
    this->isVenomous = isVenomous;
}

void Reptile::setIsVenomous(bool isVenomous){
this->isVenomous = isVenomous;
}
bool Reptile:: getIsVenomous(){
return isVenomous;
}


Enclosure::Enclosure(){}
Enclosure::Enclosure(int capacity){
    this->capacity = capacity;
    animals = new Animal[capacity];
    currentCount = 0;
}

Enclosure::~Enclosure(){delete [] animals;}

void Enclosure::addAnimal(Animal* a){
if(currentCount == capacity){
    cout<<"No space"<<endl;
    return;
}

animals[currentCount++] = *a;
}

void Enclosure::displayAnimal(){
  for(int i = 0; i<currentCount; i++){
    animals[i].display();
  }
  cout<<"Capacity: "<<capacity<<"\nCurrent Count: "<<currentCount<<endl;
}


Visitor::Visitor(){
}

Visitor::Visitor(string visitorName, int ticketBought){
    this->visitorName = visitorName;
    this->ticketBought = ticketBought;
}

Visitor::~Visitor(){}

void Visitor::displayInfo(){
cout<<"Visitor Name: "<<visitorName<<"\nTicket: "<<ticketBought<<endl;
}

int main(){
 Enclosure e(10);

Animal lion("Lion",5,true);
Animal parrot("parrot",2, false);
Reptile snake("snake",3,true,true);

e.addAnimal(&lion);
e.addAnimal(&parrot);
e.addAnimal(&snake);
cout<<"Enclosure 1 Animals: "<<endl;
e.displayAnimal();

cout<<"Visitor Info: "<<endl;
Visitor v("sarah ali",3);
v.displayInfo();

    return  0;
}

