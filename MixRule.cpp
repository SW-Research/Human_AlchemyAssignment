#include "MixRule.h"
class Element;
MixRule::MixRule(Element &i1, Element &i2, Element &out)
{
	input1 = i1;
	input2 = i2;
	output = out;
}
bool MixRule::match(Element &element1, Element &element2)
{
	if (element1 == input1 && element2 == input2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Element MixRule::combine(Element &element1, Element &element2)
{
	return output;
}
