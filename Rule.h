#pragma once
#include"Element.h"
class Element;
class Rule
{
public:
	virtual bool match(Element &element1, Element &element2) = 0;
	virtual Element combine(Element &element1, Element &element2) = 0;


};