#pragma once

#include "classes.h"



class Human  : public IRace
{

public:
	Human() :  IRace(0, 0, +1, 0)
	{

	}
    virtual ~Human() {}

};