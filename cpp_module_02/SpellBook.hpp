#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"

class ASpell;

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);

	private:
		SpellBook(const SpellBook & src);
		SpellBook & operator=(const SpellBook & rhs);
		ASpell * _spellbook[333];


};




#endif
