#pragma once
#include "Warehouse.h"

class UiManager
{
public:
	//SIGNATURES
	//Clears input and prints a error message
	void Error(std::istream& stream, string message);

	//Prints selected item to the user as reminder
	void RemindUsersChoice(vector<Item> productList, int selectedItem);

	//Prints warehouse menu title
	void PrintWarehouseTitle();

	//Prints options of the warehouse menu
	void PrintWarehouseMenu();

	//Prints the catalog with the menu
	void PrintCatalogList(vector<Item> productList);

	//Asks the quantity of the product wanted
	void AskBuyerQuantity(vector<Item> productList, int selectedItem);

	//Prints sell inventory menu
	void PrintSellInventoryMenu(vector<Item> inventoryList);

	//Asks the user how many of selected item will be sold
	void AskSellerQuantity(vector<Item> inventoryList, int selectedItem);

	//Asks the user if he wants to buy another item
	void IsSellerDone();

	//Displays actual warehouse data
	void DisplayActualData();


};

