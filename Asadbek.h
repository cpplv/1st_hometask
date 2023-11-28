#include <iostream>
#include "Name.h"

using namespace std;

class Asadbek: public Name
{
    public:
        Asadbek(string = "DefaultName");
        virtual void setName(string);
        void Print() const;

    private:
        string name;
};

