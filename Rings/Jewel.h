#pragma once
#include "Ring.h"

class JewelRing: public GoldenRing
{
	double jewelPrice;
public:
	JewelRing() :jewelPrice(0), GoldenRing() {};
	JewelRing(double jewelPrice_, double w_, double p_,Materials m_) : jewelPrice(jewelPrice_), GoldenRing(w_, p_, m_) {};
	double getPrice() { return (weight * price) + jewelPrice; }
	std::string getMaterial() { return "Golden with gem"; }
};