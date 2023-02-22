#include "Warehouse.h"

//Declare method definition to add item to inventory
void Warehouse::Add_To_Inventory(Item newItem, int amount)
{
	//Pushback new item in vector
	itemInventory.push_back(newItem);

	newItem.Set_Amount_Bought(amount);

	//Increment count of items bought
	buyCount++;
}

//Declare method signature to get items inventory and sales
int Warehouse::Get_Item_Bought(Item itemName)
{
	return itemName.Get_Amount_Bought();
}

int Warehouse::Get_Item_Sales(Item itemName)
{
	return itemName.Get_Amount_Sold();
}

int Warehouse::Get_Total_Items_Bought()
{
	return buyCount;
}

int Warehouse::Get_Total_Items_Sold()
{
	return soldCount;
}
