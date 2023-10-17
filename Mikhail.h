#include <iostream>
#include "Name.h"
using namespace std;

class Mikhail: public Name
{
	public:
		Mikhail(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};