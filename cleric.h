#pragma once
#include "jobs.h"
#include <memory>

class cleric : public Ijob
{
public:

	cleric(std::shared_ptr<IRace> race) : Ijob(race)
	{
        m_AttackDmg = 10;
        m_reach = 2;
	}

    virtual ~cleric() {}
    cleric() = delete;

private:


};