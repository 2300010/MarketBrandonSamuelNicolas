#include "UiManager.h"

//Function that clears input and print a error message
void UiManager::Error(std::istream& stream, string message)
{
	try
	{
		stream.clear();
		stream.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "\nError! " << message << ".";
	}
	catch (...)
	{

	}
}

//Function that prints selected item to the user as reminder
void UiManager::RemindUsersChoice(vector<Item> productList, int selectedItem)
{
	try
	{
		//Print reminder for user
		cout << "\nYou've selected " << productList[selectedItem].Get_Name()
			<< ". To select another item, enter 0 in the quantity selection.\n";
	}
	catch (...)
	{

	}
}

//Fucntion that prints warehouse menu
void UiManager::PrintWarehouseTitle()
{
	try
	{
		//Ask user to choose an option of the menu
		cout << "\n            Welcome to Warehouse !         " << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Please enter the number for the action desired : " << endl << endl;
	}
	catch (...)
	{

	}
}

//Function that prints options of the warehouse menu
void UiManager::PrintWarehouseMenu()
{
<<<<<<< HEAD
	//Print menu
	cout << "1 - Sell Inventory " << endl;
	cout << "2 - Buy  Inventory" << endl;
	cout << "3 - Display Data" << endl;
	cout << "4 - Pay employees" << endl;
	cout << "To quit, enter 0 : ";
}

//Function to print the catalog with the menu
void UiManager::PrintCatalogList(vector<Item> productList)
{
	//Print menu title
	cout << "\n      Welcome to the buyer's catalog!";
	cout << "\n-------------------------------------------";

	//Ask user to select an item
	cout << "\nPlease select the number of the item you want to buy in the following list:"; //OR THE NAME??

	//Print every list of items in catalog
	for (size_t ptr = 0; ptr < productList.size(); ptr++)
	{
		cout << "\n\t"<< ptr << "." << productList[ptr].Get_Name() << "\tPrice: " << productList[ptr].Get_Cost();
=======
	try
	{
		//Print menu
		cout << "1 - Sell Inventory " << endl;
		cout << "2 - Buy  Inventory" << endl;
		cout << "3 - Display Data" << endl;
		cout << "4 - Pay employees" << endl;
		cout << "To quit, enter 0 : ";
>>>>>>> 6f994aad505dd2cc6244a155c821dc45e0f411d0
	}
	catch (...)
	{

	}
}

//Function that prints the catalog with the menu
void UiManager::PrintCatalogList(vector<Item> productList)
{
	try
	{
		//Print menu title
		cout << "\n        Welcome to the catalog!";
		cout << "\n-------------------------------------------";

		//Ask user to select an item
		cout << "\nPlease select the number of the item you want to buy in the following list:\n"; //OR THE NAME??

		//Print every list of items in catalog
		for (int i = 0; i < productList.size(); i++)
		{
			cout << "\n\t1. " << productList[i].Get_Name() << "\tCost: " << productList[i].Get_Cost();
		}

		//Print the option for the user to leave
		cout << "\n\t0. Quit the catalog: ";
	}
	catch (...)
	{

	}
}

//Function that asks quantity of the product wanted
void UiManager::AskBuyerQuantity(vector<Item> productList, int selectedItem)
{
	try
	{
		//Ask user to select quantity to buy with price as a reminder
		cout << "\nThe selected product costs " << productList[selectedItem].Get_Cost()
			<< ". Please enter the quantity you want to buy: ";
	}
	catch (...)
	{

	}
}

//Function that prints sell inventory menu
void UiManager::PrintSellInventoryMenu(vector<Item> inventoryList)
{
	try
	{
		//Print menu title
		cout << "\n       Sell Inventory Application!";
		cout << "\n-------------------------------------------";

		//Ask user to select an item
		cout << "\nPlease select the number of the item you want to sell in the following list:\n"; //OR THE NAME??

		//Print every list of items in catalog
		for (int i = 0; i < inventoryList.size(); i++)
		{
			cout << "\n\t1. " << inventoryList[i].Get_Name() << "\tPrice: " << inventoryList[i].Get_Price();
		}

		//Print the option for the user to leave
		cout << "\n\t0. Quit the inventory: ";
	}
	catch (...)
	{

	}
}

//Function that asks the user how many of selected item will be sold
void UiManager::AskSellerQuantity(vector<Item> inventoryList, int selectedItem)
{
	try
	{
		//Ask user to select quantity to buy with price as a reminder
		cout << "\nThe selected product's price is " << inventoryList[selectedItem].Get_Price()
			<< ". Please enter the quantity you want to sell: ";
	}
	catch (...)
	{

	}
}

//Function to display actual warehouse data
void UiManager::DisplayActualData()
{
	try
	{

	}
	catch (...)
	{

	}
}
