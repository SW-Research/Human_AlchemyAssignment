#pragma once
#include"Alchemy.h"
#include<string>
using namespace std;
class Alchemy;
class Element
{
private:
	Alchemy* palchemy;
	string name;
	friend class Alchemy;
protected:
		//Element(Alchemy* alch, string nm);
public:
		
		Element operator +(Element &element);
		bool operator==(Element &element);
	    operator string();
		Element(Alchemy* alch, string nm);
		Element();

};

