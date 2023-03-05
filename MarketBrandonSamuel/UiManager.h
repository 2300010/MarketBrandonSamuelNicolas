#pragma once
#include "Catalog.h"

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

	//Function that prints information for the last order
	void PrintOrderInfo(int totalOrderCost, int actualSpendings);

	//Prints sell inventory menu
	bool PrintSellInventoryMenu(vector<Item> inventoryList);

	//Asks the user how many of selected item will be sold
	void AskSellerQuantity(vector<Item> inventoryList, int selectedItem);

	//Displays actual warehouse data
	void DisplayActualData();

	//Asks minutes for employee payment
	void AskMinutesPassed();

	//Prints information for the last payment
	void PrintPaymentInfo(int minutesPassed, int lastPayment, int totalPayment);
};

