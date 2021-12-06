#pragma once
#include <string>
enum Materials
{
	gold,
	silver,
	jewel
};

class Ring
{
protected:
	Materials material;
	double weight;
	double price;
public:
	Ring() :weight(0), price(0) {};
	Ring(double w_, double p_, Materials m_) :
		weight(w_), price(p_), material(m_) {};
	void setRing(double w_, double p_);
	virtual double getPrice() = 0;
	double getWeight() { return weight; }
	double getPricePerGram() { return price; }
	virtual std::string getMaterial() = 0;
};