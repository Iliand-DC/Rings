#pragma once
#include "Ring.h"


class GoldenRing:public Ring
{
public:
	GoldenRing() :Ring() {};
	GoldenRing(double w_, double p_, Materials m_) :Ring(w_, p_,m_)  {};
	double getPrice() { return weight * price * 1.05; }
	std::string getMaterial() { return "Gold"; }
};