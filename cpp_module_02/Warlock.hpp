#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

#include "SpellBook.hpp"

class SPellBook;
class ASpell;
class ATarget;

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		//getters
		const std::string & getName(void) const ;
		const std::string & getTitle(void) const ;
		//setter
		void setTitle(const std::string & title);

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name,const ATarget & target);

		void introduce(void) const;

		void displaySpell(void);

	private:
		Warlock();
		Warlock(const Warlock & src);
		Warlock & operator=(const Warlock & rhs);
		std::string _name;
		std::string _title;
		//array of spells

		//ASpell * _spellbook[333];
		SpellBook _spellbook;
};

#endif
