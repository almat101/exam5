#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgeTargetType(std::string const &target_name);
		ATarget* createTarget(std::string const &target_name);

	private:
		TargetGenerator(const TargetGenerator & src);
		TargetGenerator & operator=(const TargetGenerator & rhs);
		
		ATarget * _target[333];

};




#endif
