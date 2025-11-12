#include<string>
using namespace std;

#ifndef VISITOR_H
#define VISITOR_H

class Visitor{
private:
string visitorName;
int ticketBought;

public:
Visitor();
Visitor(string, int);
~Visitor();


void displayInfo();

};
#endif
