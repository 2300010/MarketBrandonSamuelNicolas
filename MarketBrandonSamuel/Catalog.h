#pragma once
#include "Item.h"
#include <vector>

class Catalog 
{
	vector<Item> catalogItems;

public:

	Catalog(vector<Item> catalogItems)
	{
		this->catalogItems = catalogItems;
	}

	Catalog() {}

	int Get_Cost(int purchaseQuantity, int selectedItemId);

};

