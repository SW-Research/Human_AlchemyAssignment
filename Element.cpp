#include "Element.h"
class Alchemy;
Element Element::operator +(Element &element)
{
	return(palchemy->combine(*this, element));
}
bool Element::operator==(Element &element)
{
	if (this->name == element.name && this->palchemy == element.palchemy)
	{
		return true;
	}
	return false;
}
Element::operator string()
{
	return (this->name);
}
Element::Element(Alchemy* alch, string nm)
{
	palchemy =alch;
	name = nm;
}
Element::Element()
{

}
/*Element& Element::ConstructorWrapper(Alchemy* alch, string nm)
{
	Element e(alch,nm);
	return e;
}*/