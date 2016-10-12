#pragma once
#include <iostream>
#include "ExpLog.hh"
#include <string>


class Atom : public ExpLog
{
	public:
		Atom& operator=(Ter val);
		Atom& operator=(bool const val);
		Atom& operator=(Atom const&);
		Atom();
		Atom(Ter);
		Atom(Atom const&);
		virtual~Atom();
		std::string toString()const;
		Ter evaluate()const;

	private:
		static int _num_atom;
		const int _id;
		Ter _val;
};
