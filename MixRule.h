#pragma once
#include"Rule.h"
#include"Element.h"
class Element;
class Rule;
class MixRule:public Rule
{
private:
	Element input1;
	Element input2;
	Element output;
public:
	MixRule(Element &i1, Element &i2, Element &out);
	bool match(Element &e1, Element &e2);
	Element combine(Element &e1, Element &e2);


};
