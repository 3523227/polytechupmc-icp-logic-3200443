#include <iostream>
#include <string>
#include <sstream> 
#include "ExpLog.hh"
#include "Atom.hh"


int Atom::_num_atom = 0;



Atom& Atom::operator=(Ter val)
{
	_val = val;
	return *this;
}
Atom& Atom::operator=(bool const val)
{
	if(val)
	{
		_val = T;
	}else if(!val)
	{
		_val = F;
	}else
	{
		_val = U;
	}
	return *this;
}
Atom& Atom::operator=(Atom const& val)
{
	this -> _val = val.evaluate();
}
Atom::Atom(): _id(Atom::_num_atom++), _val(U){}

Atom::Atom(Ter val) : _id(Atom::_num_atom++), _val(val){}

Atom::Atom(Atom const& at):_id(Atom::_num_atom++), _val(U){}

std::string Atom::toString()const
{
	std::ostringstream oss;
	oss.str("");
	oss << "(a_" << _id << " = ";
	oss << _val << ")";
	return oss.str();
}

Ter Atom::evaluate()const
{
	return this->_val;
}
Atom::~Atom()
{

}