#include <iostream>
#include "ExpLog.hh"

std::ostream& operator<<(std::ostream& out, Ter val)
{
	switch(val)
	{
		case T:
			return out<<"T";
			break;
		case F:
			return out<<"F";
			break;
		default:
			return out<<"U";
	}
}