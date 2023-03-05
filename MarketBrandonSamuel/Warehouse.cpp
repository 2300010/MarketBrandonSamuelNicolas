#include "Warehouse.h"

//Declare method definition to add item to inventory
void Warehouse::Add_To_Inventory(Item newItem, int amount)
{
	try
	{
		//Pushback new item in vector
		itemInventory.push_back(newItem);

		newItem.Set_Amount_Bought(amount);

		//Increment count of items bought
		buyCount++;
	}
	catch (...)
	{

	}
}


//Declare method definition to add catalog to buy inventory warehouse

void Warehouse::Add_Catalog(vector<Item> catalog)
{
	try
	{
		this->catalog = catalog;
	}
	catch (...)
	{

	}
}

//Declare method signature to get items inventory and sales
int Warehouse::Get_Item_Bought(Item itemName)
{
	try
	{
		return itemName.Get_Amount_Bought();
	}
	catch (...)
	{

	}
}

int Warehouse::Get_Item_Sales(Item itemName)
{
	try
	{
		return itemName.Get_Amount_Sold();
	}
	catch (...)
	{
		
	}
}

int Warehouse::Get_Total_Items_Bought()
{
	try
	{
		return buyCount;
	}
	catch (...)
	{

	}
}

int Warehouse::Get_Total_Items_Sold()
{
	try
	{
		return soldCount;
	}
	catch (...)
	{

	}
}
