#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

//abstract class virtual pure function and virtual destructor
class ASpell
{
	public:
	ASpell(std::string name, std::string effects);

	ASpell();
	ASpell(const ASpell & src);
	ASpell & operator=(const ASpell & rhs);
	virtual ~ASpell();
	//getters
	std::string getName(void) const;
	std::string getEffects(void) const;

	virtual ASpell * clone(void) const = 0;
	void launch(const ATarget & target)const ;

	protected:

	std::string _name;
	std::string _effects;

};

#endif
