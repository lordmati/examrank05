#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::~ASpell(){}

ASpell::ASpell(const ASpell &data)
{
	*this = data;
}
ASpell &ASpell::operator=(const ASpell &data)
{
	this->_name = data._name;
	this->_effects = data._effects;
	return (*this);
}

const std::string &ASpell::getName() const { return(this->_name);}
const std::string &ASpell::getEffects() const {return(this->_effects);}

void ASpell::launch(const ATarget &data)
{
	data.getHitBySpell(*this);
}
ASpell::ASpell(const std::string &name,const std::string &effects)
{
	this->_name = name;
	this->_effects = effects;
}
