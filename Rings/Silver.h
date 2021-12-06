#pragma once
#include "Ring.h"

class SilverRing :public Ring
{
	Materials material = silver;
public:
	SilverRing() :Ring() {};
	SilverRing(double w_, double p_, Materials m_) :Ring(w_, p_, m_) {};
	double getPrice(){ return weight * price * 1.1; }
	std::string getMaterial() { return "Silver"; }
};