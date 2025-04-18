#include "HeatRule.h"
HeatRule::HeatRule(Alchemy* palch)
{
	alchemy = palch;
}
bool HeatRule::match(Element &element1, Element &element2)
{
	//Element eheat(alchemy, "heat");
	if (element1.operator std::string()=="heat") // mafish hena comparison lel alch.
	{
		return true;
	}
	return  false;
}
Element HeatRule::combine(Element &element1, Element &element2)
{
	Element eh (alchemy, ("hot " + element2.operator std::string()) );
	return eh;

}