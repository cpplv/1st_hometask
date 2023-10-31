#include <iostream>
#include "Name.h"
#include "Andrejs.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Meiirzhan *Names[array_size];

	Andrejs a;
	a.setName("Andrejs");

	Meiirzhan b;
	b.setname("Meiirzhan")

	Names[0] = &a;

	for (int i=0; i<array_size; i++)
		Meiirzhan[i]->Print();

	return 0;
}
