#include <iostream>
#include "Name.h"
#include "Andrejs.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Makhmud *Names[array_size];
	
	Andrejs a;
	a.setName("Makhmud");
	
	Names[0] = &a;
	
	for (int i=0; i<array_size; i++)
		Makhmud[i]->Print();
	
	return 0;
}
