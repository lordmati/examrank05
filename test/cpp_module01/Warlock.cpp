#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const {return(this->_name);}
const std::string &Warlock::getTitle() const {return(this->_title);}

Warlock::~Warlock(){ std::cout << _name << ": My job here is done!" << std::endl;}

void Warlock::introduce()const { std::cout << _name << ": I am " << _name << ", " <<_title <<"!" << std::endl; }

void Warlock::setTitle(const std::string &title) {this->_title = title;}

void Warlock::learnSpell(ASpell *ptr)
{
	this->spellbook.learnSpell(ptr);
	///BORRAR
	if(ptr)
		this->map[ptr->getName()] = ptr->clone();
}

void Warlock::forgetSpell(const std::string &name)
{
	this->spellbook.forgetSpell(name);
	///BORRAR
	if(this->map.find(name) != this->map.end())
		this->map.erase(this->map.find(name));
}



void Warlock::launchSpell(const std::string &name, ATarget &target)
{
	if(this->spellbook.createSpell(name) != NULL)
	{
		this->spellbook.createSpell(name)->launch(target);
	}
	//BORRAR
	if(this->map.find(name) != this->map.end())
		this->map[name]->launch(target);
}


//////

ASpell	*SpellBook::createSpell(const std::string &name)
{
	if(this->map.find(name) != this->map.end())
	{
		ASpell *aux;
		aux = this->map.find(name);
		return aux;
	}
	return(NULL);
}
