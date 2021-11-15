#include <iostream>
#include <string>
#include "Name.h"
#include "Jakhongir.h"
#include "Andrejs.h"
using namespace std;

int main()
{
	const int array_size = 1;
	Name *Names[array_size];
	
	Andrejs b;
	b.setName("Andrejs");

	Jakhongir a;
	a.setName("Jakhongir");

	Names[0] = &b;
	Names[1] = &a;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
