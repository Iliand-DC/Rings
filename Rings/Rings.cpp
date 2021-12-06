#include <iostream>
#include "Ring.h"
#include "Golden.h"
#include "Jewel.h"
#include "Silver.h"

void output(Ring* ring)
{
	std::cout << "Вес: " << ring->getWeight() << "\nЦена за грамм: " << ring->getPricePerGram() << "\nЦена: " << ring->getPrice()<<'\n';
	std::cout << "Материал: " << ring->getMaterial()<<"\n";
		
}

int main()
{
	setlocale(LC_ALL, "rus");
	Ring* arr[3];
	arr[0] = new SilverRing(1,2,silver);
	arr[1] = new GoldenRing(1,2, gold);
	arr[2] = new JewelRing(1,2,3,jewel);
	for (int i = 0; i < 3; i++)
	{
		output(arr[i]);
	}
}