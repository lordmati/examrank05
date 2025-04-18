#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const {return(this->_name);}
const std::string &Warlock::getTitle() const {return(this->_title);}

void Warlock::setTitle(const std::string &title){this->_title = title;}

Warlock::~Warlock()
{
	std::cout << _name <<": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *ptr)
{
	book.learnSpell(ptr);
}
void Warlock::forgetSpell(std::string name)
{
	book.forgetSpell(name);
}
void Warlock::launchSpell(std::string name,ATarget &data)
{
	if(book.createSpell(name))
		book.createSpell(name)->launch(data);
}
