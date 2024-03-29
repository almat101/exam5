#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp" 

class Fireball : public ASpell
{
	public:
	Fireball();
	~Fireball();
	ASpell * clone(void)const;
};


#endif
