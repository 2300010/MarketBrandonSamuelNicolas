#pragma once
#include "Warehouse.h"

class UiManager
{
public:

	//Function to clear input and print a error message
	void Error(std::istream& stream, string message);

	//Function to print selected item to the user as reminder
	void RemindUsersChoice(vector<Item> productList, int selectedItem);

	//Function to print warehouse menu title
	void PrintWarehouseTitle();

	//Function to print options of the warehouse menu
	void PrintWarehouseMenu();

	//Function to print the catalog with the menu
	void PrintCatalogList(vector<Item> productList, int listLength);

	//Function to ask quantity of the product wanted
	void AskBuyerQuantity(vector<Item> productList, int selectedItem);

	//Function to display actual warehouse data
	void DisplayActualData();
};

