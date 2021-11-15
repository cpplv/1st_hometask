#include <iostream>
#include "Name.h"
using namespace std;

class Jakhongir: public Name
{
	public:
		Jakhongir(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
