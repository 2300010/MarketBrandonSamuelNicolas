#pragma once
#include "Item.h"
#include <vector>

class Catalog 
{
	vector<Item> catalogItems;

public:
	
	Catalog();

	int Get_Cost( int selectedItemId, int purchaseQuantity );

	vector<Item> Get_Catalog_Items();

	void Init();

};

