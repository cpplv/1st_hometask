#include <iostream>
#include "Name.h"
#include "Mikhail.h"

using namespace std;

Mikhail::Mikhail(string n)
{
	name=n;
}

void Mikhail::setName(string n)
{
	name=n;
}

void Mikhail::Print() const
{
	cout << name << endl;
}