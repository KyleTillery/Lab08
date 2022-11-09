#pragma once
#include "jobs.h"
#include <memory>

class fighter : public Ijob
{
public:

	fighter(std::shared_ptr<IRace> race) : Ijob(race)
	{
        m_AttackDmg = 10;
        m_reach = 2;
	}

    virtual ~fighter() {}
    fighter() = delete;

private:


};