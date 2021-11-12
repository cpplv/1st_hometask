#include <iostream>
#include "Name.h"
#include "Tabe.h"

using namespace std;

Tabe::Tabe(string n)
{
	name=n;
}

void Tabe::setName(string n)
{
	name=n;
}

void Tabe::Print() const
{
	cout << name << endl;
}


