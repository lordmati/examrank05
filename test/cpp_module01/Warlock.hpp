#pragma once
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class Warlock
{
	private:
			std::string _name;
			std::string _title;
			std::map<std::string , ASpell*> map;//SE VA A SPELLBOOKK
			SpellBook	spellBook;
			Warlock();
			Warlock &operator=(const Warlock  &data);
			Warlock (const Warlock &data);
	public:
			Warlock(const std::string &name,const std::string &title);
			~Warlock();
			const std::string &getName() const ;
			const std::string &getTitle() const ;
			void introduce() const ;
			void setTitle(const std::string &title);
			
			void learnSpell(ASpell *ptr);
			void forgetSpell(const std::string &name);
			void launchSpell(const std::string &name, ATarget &target);
			
};
