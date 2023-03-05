#include "Warehouse.h"

 Warehouse::Warehouse(){
	buyCount = 0;
	soldCount = 0;
	catalog = Catalog();
	myErrorManager = ErrorManager();
}

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


// Declare method signature to get and add to Business Spending
void Warehouse::Add_To_Business_Spending(int spending) {
	try
	{
		businessSpending += spending;
	}
	catch (const std::exception&)
	{

	}
}

int Warehouse::Get_Business_Spending() {
	try
	{
		return businessSpending;
	}
	catch (const std::exception&)
	{

	}
}


void Warehouse::Sell_Inventory()
{

}

//Function to buy inventory from catalog
void Warehouse::Buy_Inventory()
{
	//Declare variables for item selected and quantity to buy
	int idToBuy = 0;
	int quantityToBuy = 0;

	myErrorManager.GetUiManager().PrintCatalogList(catalog.Get_Catalog_Items());

	idToBuy >> myErrorManager.IntInputValidator(cin);

	myErrorManager.GetUiManager().AskBuyerQuantity(catalog.Get_Catalog_Items(), idToBuy);
	quantityToBuy >> myErrorManager.IntInputValidator(cin);
	cout << "Selected :" << quantityToBuy << endl;

	Add_To_Inventory(catalog.Get_Catalog_Items()[idToBuy], quantityToBuy);
	Add_To_Business_Spending(catalog.Get_Cost(quantityToBuy, idToBuy));
	cout << "Total Cost : " << catalog.Get_Cost(quantityToBuy, idToBuy) << endl;
	cout << "Total Business Spending : " << Get_Business_Spending() << endl;

}


ErrorManager Warehouse::Get_ErrorManager() {
	try
	{
		return myErrorManager;
	}
	catch (const std::exception&)
	{

	}
}