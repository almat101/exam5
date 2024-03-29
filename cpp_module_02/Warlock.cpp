#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name) , _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
	// for (int i = 0; i < 333; i++)
	// {
	// 	_spellbook[i] = NULL;
	// }
}


Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	// for (int i = 0; i < 333; i++)
	// {
	// 	if (_spellbook[i] != NULL)
	// 		delete _spellbook[i];
	// }
}


const std::string & Warlock::getName(void) const
{
	return _name;
}


const std::string & Warlock::getTitle(void) const
{
	return _title;
}


void Warlock::setTitle(const std::string & title)
{
	_title = title;
}


void Warlock::introduce(void) const
{
	//<NAME>: I am <NAME>, <TITLE>!
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

// private copy, copy assignment and default constructor

Warlock::Warlock(){}




Warlock::Warlock(const Warlock & src)
{
	*this = src;
}


Warlock & Warlock::operator=(const Warlock & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return *this;
}

/*
learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.
*/

void Warlock::learnSpell(ASpell *spell)
{
	_spellbook.learnSpell(spell);

}


void Warlock::forgetSpell(std::string spell_name)
{
	_spellbook.forgetSpell(spell_name);

}


void Warlock::launchSpell(std::string spell_name,const ATarget & target)
{
	ASpell *tmp =  _spellbook.createSpell(spell_name);
	if (tmp)
		tmp->launch(target);
	else
		return ;
}

void Warlock::displaySpell(void)
{
	//for (int i = 0; i < 200; i++)
	//{
	//	if (_spellbook[i])
	//		std::cout << "Spell name : " << _spellbook[i]->getName()<< " effects: " << _spellbook[i]->getEffects() << std::endl;
	//}
}
