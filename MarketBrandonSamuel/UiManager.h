#pragma once
#include "Catalog.h"

class UiManager
{
	char DOLLAR_SIGN = '$';

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

	//Shows display options and asks user what to display
	void DisplayOptions();

	//Displays actual warehouse data
	void DisplayGeneralData(int totalItemsBought, int totalItemsSold, int totalCostPaid, int totalPayment, int totalSales);

	//Displays actual item data
	void DisplayItemData(vector<Item> itemList, int selectedItemIndex);

	//Asks user for which item to display the data
	void AskItemToDisplay(vector<Item> itemList);

	//Asks minutes for employee payment
	void AskMinutesPassed();

	//Prints information for the last payment
	void PrintPaymentInfo(int minutesPassed, int lastPayment, int totalPayment);
};

