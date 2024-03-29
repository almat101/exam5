#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name) , _effects(effects){}

ASpell::ASpell(){}

ASpell::ASpell(const ASpell & src)
{
	*this = src;
}

ASpell & ASpell::operator=(const ASpell & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return *this;
}

ASpell::~ASpell(){}

std::string ASpell::getName(void) const
{
	return _name;
}

std::string ASpell::getEffects(void) const
{
	return _effects;
}

//abstract class do not have the implementation of pure virtual function, this function is implemented in the derived class

void ASpell::launch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}
