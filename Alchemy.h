#pragma once
#include"Rule.h"
#include<string.h>
class Rule;
class Element;

class Alchemy
{
private:
	int ruleCount;
	Rule** rules;
public:
	Alchemy(const int rlcount);
	~Alchemy();
	Element operator [](string name);
	Rule*& operator [](int index);
	Element combine(Element &element1, Element &element2);




};
