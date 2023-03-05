#pragma once
#include "Catalog.h"

class UiManager
{


public:
<<<<<<< HEAD


	//Function to clear input and print a error message
=======
	//SIGNATURES
	//Clears input and prints a error message
>>>>>>> 6f994aad505dd2cc6244a155c821dc45e0f411d0
	void Error(std::istream& stream, string message);

	//Prints selected item to the user as reminder
	void RemindUsersChoice(vector<Item> productList, int selectedItem);

	//Prints warehouse menu title
	void PrintWarehouseTitle();

	//Prints options of the warehouse menu
	void PrintWarehouseMenu();

<<<<<<< HEAD
	//Function to print the catalog with the menu
=======
	//Prints the catalog with the menu
>>>>>>> 6f994aad505dd2cc6244a155c821dc45e0f411d0
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

