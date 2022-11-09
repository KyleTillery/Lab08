#pragma once

#include "dwarf.h"
#include "human.h"
#include "elf.h"
#include "danceMan.h"
#include <memory>


class Ijob
{
public:

    Ijob(std::shared_ptr<IRace> race) : m_reach(0), m_AttackDmg(0), m_race(race)
    {

    }

	virtual int GetHullPoints() = 0;

    virtual ~Ijob() {}

protected:
	int m_AttackDmg;
    int m_reach;
	std::shared_ptr<IRace> m_race;

};




