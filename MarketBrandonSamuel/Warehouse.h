#pragma once
#include "ErrorManager.h"
#include <vector>

class Warehouse
{
	//Declare variable to count items bought and sold
	int buyCount;
	int soldCount;
	int businessSpending;
	Catalog catalog;
	ErrorManager myErrorManager;
	

public:

	//Declare constructor
	Warehouse();

	//Declare vector to receive all items created
	vector<Item> itemInventory;

	//Declare method signature to add item to inventory
	void Add_To_Inventory(Item newItem, int amount);

	//Declare method definition to add catalog to buy inventory warehouse
	void Add_Catalog(vector<Item> catalog);

	//Declare method signature to get items inventory and sales
	int Get_Item_Bought(Item itemName);
	int Get_Item_Sales(Item itemName);

	int Get_Total_Items_Bought();
	int Get_Total_Items_Sold();

	void Add_To_Business_Spending(int spending);
	int Get_Business_Spending();

	// App Methods
	void Sell_Inventory();

	void Buy_Inventory();

	ErrorManager Get_ErrorManager();

};

