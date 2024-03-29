#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type){}

ATarget::ATarget(){}

ATarget::~ATarget(){}

ATarget::ATarget(const ATarget & src)
{
	*this = src;
}

ATarget & ATarget::operator=(const ATarget & rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

const std::string & ATarget::getType(void) const
{
	return _type;
}

void ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

//abstract class do not have the implementation of pure virtual function, this function is implemented in the derived class
