#pragma once
#include <iostream>
#include <cstring>
#include <exception>
#include "Jobs.h"
#include "Personal.h"

class PerioadaProba : public std::exception
{
	public:
		PerioadaProba() {};
		~PerioadaProba() {};
		const char* what() const throw()
		{
			return "Angajat aflat in perioada de proba!\n";
		}
};

