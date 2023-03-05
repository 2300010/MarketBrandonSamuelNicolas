#include "UiManager.h"

//Function to clear input and print a error message
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

//Function to print selected item to the user as reminder
void UiManager::RemindUsersChoice(vector<Item> productList, int selectedItem)
{
	//Print reminder for user
	cout << "\nYou've selected " << productList[selectedItem].Get_Name()
		<< ". To select another item, enter 0 in the quantity selection.\n";
}

//Fucntion to print warehouse menu
void UiManager::PrintWarehouseTitle()
{
	//Ask user to choose an option of the menu
	cout << "\n            Welcome to Warehouse !         " << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Please enter the number for the action desired : " << endl << endl;
}

//Function to print options of the warehouse menu
void UiManager::PrintWarehouseMenu()
{
	//Print menu
	cout << "1 - Sell Inventory " << endl;
	cout << "2 - Buy  Inventory" << endl;
	cout << "3 - Display Data" << endl;
	cout << "4 - Pay employees" << endl;
	cout << "To quit, enter 0 : ";
}

//Function to print the catalog with the menu
void UiManager::PrintCatalogList(vector<Item> productList, int listLength)
{
	//Print menu title
	cout << "\n      Welcome to the buyer's catalog!";
	cout << "\n-------------------------------------------";

	//Ask user to select an item
	cout << "\nPlease select the number of the item you want to buy in the following list:"; //OR THE NAME??

	//Print every list of items in catalog
	for (int i = 0; i < listLength; i++)
	{
		cout << "\n\t1. " << productList[i].Get_Name() << "\tPrice: " << productList[i].Get_Cost();
	}

	//Print the option for the user to leave
	cout << "\n\t0. Quit the catalog: ";
}

//Function to ask quantity of the product wanted
void UiManager::AskBuyerQuantity(vector<Item> productList, int selectedItem)
{
	//Ask user to select quantity to buy with price as a reminder
	cout << "\nThe selected product costs " << productList[selectedItem].Get_Cost()
		<< ". Please enter the quantity you want to buy: ";
}

//Function to display actual warehouse data
void DisplayActualData()
{

}
