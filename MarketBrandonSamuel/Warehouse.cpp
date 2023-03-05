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

<<<<<<< HEAD

=======
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
>>>>>>> 6f994aad505dd2cc6244a155c821dc45e0f411d0

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

void Warehouse::Buy_Inventory()
{
	size_t ptr;

	myErrorManager.GetUiManager().PrintCatalogList(catalog.Get_Catalog_Items());

	cout << "Catalog Items to Buy : " << endl;

	for (size_t ptr = 0; ptr < catalog.Get_Catalog_Items().size(); ptr++) {
		cout << " - " << ptr << " " << catalog.Get_Catalog_Items()[ptr].Get_Name() << " " << endl;
	}

	int idToBuy = 0;
	int quantityToBuy = 0;

	
	cout << "Please select the Item you wish to buy :";
	idToBuy >> myErrorManager.IntInputValidator(cin);

	cout << "Please select the quantity you wish to buy ( Enter 0 if you wish to go back to item selection) :";
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