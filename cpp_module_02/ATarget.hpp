#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell; // necessary for getHitBySpell

// abstract class virtual pure function and virtual destructor
class ATarget
{
public:
	ATarget(std::string type);

	ATarget();
	ATarget(const ATarget &src);
	ATarget &operator=(const ATarget &rhs);
	virtual ~ATarget();

	virtual ATarget *clone(void) const = 0;

	// getter
	const std::string &getType(void) const;

	void getHitBySpell(const ASpell &spell) const ;

protected:
	std::string _type;
};

#endif
