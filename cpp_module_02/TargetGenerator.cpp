#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{
	for (int i = 0; i < 333; i++)
		_target[i] = NULL;
}

TargetGenerator::~TargetGenerator()
{

}

TargetGenerator::TargetGenerator(const TargetGenerator & src)
{
	*this = src;
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 333; i++)
		{
			_target[i] = rhs._target[i];
		}
	}
	return *this;
}
/*
 void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type
*/

void TargetGenerator::learnTargetType(ATarget * target)
{
	for (int i = 0; i < 333; i++)
	{
		if(_target[i] == NULL)
		{
			_target[i] = target;
			return ;
		}
	}

}

void TargetGenerator::forgeTargetType(std::string const &target_name)
{
	for (int i = 0; i < 333; i++)
	{
		if (_target[i] && _target[i]->getType() == target_name)
			_target[i] = NULL;
	}
}

ATarget * TargetGenerator::createTarget(std::string const & target_name)
{
	for (int i = 0; i < 333; i++)
	{
		if (_target[i] && _target[i]->getType() == target_name)
			return _target[i]->clone();
	}
	return 0;

}


