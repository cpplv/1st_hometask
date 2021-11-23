#include <iostream>
#include "Name.h"
using namespace std;

class Tabe: public Name
{
	public:
		Tabe(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
