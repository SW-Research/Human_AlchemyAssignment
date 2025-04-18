#include "Alchemy.h"

Alchemy::Alchemy(const int rlcount)
{
	ruleCount = rlcount;
	rules = new Rule*[ruleCount];
	for (int i = 0; i < ruleCount; i++)
	{
		rules[i] = NULL;
	}
}
Alchemy::~Alchemy()
{
	for (int i = 0; i <ruleCount; i++)
	{
		delete rules[i];
		delete[]rules;
	}
}
Element Alchemy::operator [](string name)
{
	Element e(this, name);
	return e;
}
Rule*& Alchemy::operator [](int index)
{
	return rules[index];
}
Element Alchemy::combine(Element &element1, Element &element2)
{
	for (int i = 0; i < ruleCount; i++)
	{
		if (rules[i]->match(element1, element2))
		{
			return rules[i]->combine(element1, element2);
		}
		else if (rules[i]->match(element2, element1))
		{
			return rules[i]->combine(element2, element1);
		}
		else
		{
			return Element(this, "nothing");
		}
	}
}