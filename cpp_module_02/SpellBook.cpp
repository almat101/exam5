#include "SpellBook.hpp"


SpellBook::SpellBook()
{
	for (int i = 0; i < 333; i++)
		_spellbook[i] = NULL;
}

SpellBook::~SpellBook()
{

}

SpellBook::SpellBook(const SpellBook & src)
{
	*this = src;
}

SpellBook & SpellBook::operator=(const SpellBook & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 333; i++)
		{
			_spellbook[i] = rhs._spellbook[i];
		}
	}
	return *this;
}

/*
void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.
*/

void SpellBook::learnSpell(ASpell * spell)
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

void SpellBook::forgetSpell(std::string const &spell_name)
{
	for (int i = 0; i < 333; i++)
	{
		if (_spellbook[i] && _spellbook[i]->getName() == spell_name)
			_spellbook[i] = NULL;
	}
}

ASpell * SpellBook::createSpell(std::string const & spell_name)
{
	for (int i = 0; i < 333; i++)
	{
		if (_spellbook[i] && _spellbook[i]->getName() == spell_name)
			return _spellbook[i]->clone();
	}
	return 0;

}


