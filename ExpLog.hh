#pragma once
#include <string>


enum Ter { U, F, T };
std::ostream& operator<<(std::ostream&, Ter val);
class ExpLog
{
   public:
      virtual std::string toString() const  = 0;
      virtual Ter evaluate()const = 0;
};
