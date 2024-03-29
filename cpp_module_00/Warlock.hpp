#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

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
		void introduce(void) const;

	private:
		Warlock();
		Warlock(const Warlock & src);
		Warlock & operator=(const Warlock & rhs);
		std::string _name;
		std::string _title;

};

#endif
