#pragma once

#include "classes.h"

class IRace;

class dwarf  : public IRace
{

public:
	dwarf() :  IRace(+1, +1, 0, -1)
	{

	}
    virtual ~dwarf() {}

};


