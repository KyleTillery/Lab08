#pragma once
//danceMan

#include "classes.h"


class Halfling  : public IRace
{

public:
	Halfling() :  IRace(-2, -2, -2, +10)
	{

	}
    virtual ~Halfling() {}

};