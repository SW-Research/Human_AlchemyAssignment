#pragma once
#include"Alchemy.h"
#include"Rule.h"
class Alchemy;
class Rule;
class Element;
class HeatRule : public Rule
{
private:
	Alchemy* alchemy;
public:
	HeatRule(Alchemy* palch);
	bool match(Element &element1, Element &element2);
	Element combine(Element &element1, Element &element2);
};
