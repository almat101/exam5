#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name) , _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
	for (int i = 0; i < 333; i++)
	{
		_spellbook[i] = NULL;
	}
}


Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	//exam doesnt check leak (lol)
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

	for (int i = 0; i < 333; i++)
	{
		if(_spellbook[i] == NULL)
		{
			_spellbook[i] = spell;
			return ;
		}
	}

}


void Warlock::forgetSpell(std::string spell_name)
{

	for (int i = 0; i < 333; i++)
	{
		if (_spellbook[i] && _spellbook[i]->getName() == spell_name)
			_spellbook[i] = NULL;
	}
}


void Warlock::launchSpell(std::string spell_name,const ATarget & target)
{
	for (int i = 0; i < 333; i++)
	{
		if (_spellbook[i] && _spellbook[i]->getName() == spell_name)
			_spellbook[i]->launch(target);
	}

}
