#include <iostream>
#include "Name.h"
#include "Asadbek.h"

using namespace std;

Asadbek::Asadbek(string n)
{
	name = n;
}

void Asadbek::setName(string n)
{
    name = n;
}

void Asadbek::Print() const
{
    cout << name << endl;
}
