#pragma once
#include <vector>
#include "Item.h"
#include "Catalog.h"

using namespace std;

class Warehouse
{
	//Declare variable to count items bought and sold
	int buyCount;
	int soldCount;
	Catalog catalog;

public:

	//Declare constructor
	Warehouse(){}

	//Declare vector to receive all items created
	vector<Item> itemInventory;

	//Declare method signature to add item to inventory
	void Add_To_Inventory(Item newItem, int amount);

	void Add_Catalog(vector<Item> catalog);

	//Declare method signature to get items inventory and sales
	int Get_Item_Bought(Item itemName);
	int Get_Item_Sales(Item itemName);

	int Get_Total_Items_Bought();
	int Get_Total_Items_Sold();
};

