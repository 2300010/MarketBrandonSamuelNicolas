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
	}
	catch (...)
	{

	}
}

//Function that prints options of the warehouse menu
void UiManager::PrintWarehouseMenu()
{
	//Print menu
	cout << "Please enter the number for the action desired : " << endl << endl;
	cout << "\t1 - Sell Inventory " << endl;
	cout << "\t2 - Buy  Inventory" << endl;
	cout << "\t3 - Display Data" << endl;
	cout << "\t4 - Pay employees" << endl;
	cout << "\tTo quit, enter 0 : ";
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
			cout << "\n\t" << i + 1 << ". " << productList[i].Get_Name() << "\tCost: " << productList[i].Get_Cost() << DOLLAR_SIGN;
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
			<< DOLLAR_SIGN << ". Please enter the quantity you want to buy: ";
	}
	catch (...)
	{

	}
}

//Function that prints information for the last order
void UiManager::PrintOrderInfo(int totalOrderCost, int actualSpendings)
{
	try
	{
		cout << "\n\tTotal Cost : " << totalOrderCost << DOLLAR_SIGN;
		cout << "\nTotal Business Spending : " << actualSpendings << DOLLAR_SIGN;
	}
	catch (...)
	{

	}
}

//Function that prints sell inventory menu
bool UiManager::PrintSellInventoryMenu(vector<Item> inventoryList)
{
	try
	{
		bool inventoryIsEmpty = false;

		//Verify if inventory is empty
		if (inventoryList.size() == 0)
		{
			cout << "\nError! Inventory is empty. Please buy items first.\n";

			inventoryIsEmpty = true;
		}
		else 
		{
			//Print menu title
			cout << "\n       Sell Inventory Application!";
			cout << "\n-------------------------------------------";

			//Ask user to select an item
			cout << "\nPlease select the number of the item you want to sell in the following list:\n"; //OR THE NAME??

			//Print every list of items in catalog
			for (int i = 0; i < inventoryList.size(); i++)
			{
				cout << "\n\t1. " << inventoryList[i].Get_Name() << "\tPrice: " << inventoryList[i].Get_Price() << DOLLAR_SIGN;
			}

			//Print the option for the user to leave
			cout << "\n\t0. Quit the inventory: ";

			inventoryIsEmpty = false;
		}

		return inventoryIsEmpty;
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
			<< DOLLAR_SIGN << ". Please enter the quantity you want to sell: ";
	}
	catch (...)
	{

	}
}

//Function that shows display options and asks user what to display
void UiManager::DisplayOptions()
{
	//Print menu title
	cout << "\n       Information Display Options!";
	cout << "\n-------------------------------------------\n";

	//Ask user to choose an option
	cout << "\nPlease select of the following options:\n";

	//Print display options
	cout << "\n\t1. General data";
	cout << "\n\t2. Specific item data";
	cout << "\n\tSelection: ";
}

//Function that displays actual warehouse data
void UiManager::DisplayGeneralData(int totalItemsBought, int totalItemsSold, int totalCostPaid, 
	int totalPayment, int totalSales)
{
	try
	{
		//Declare variable for small equations
		int combinedExpenses = totalCostPaid + totalPayment;
		int totalProfit = totalSales - combinedExpenses;

		//Print menu title
		cout << "\n      Actual Data of the Warehouse!";
		cout << "\n-------------------------------------------\n";

		//Print all data of the warehouse
		cout << "\n\tTotal amount of items bought: " << totalItemsBought;
		cout << "\n\tTotal amount of items sold: " << totalItemsSold;
		cout << "\n\tTotal combined cost of all items bought: " << totalCostPaid << DOLLAR_SIGN;
		cout << "\n\tTotal amount paid to employees: " << totalPayment << DOLLAR_SIGN;
		cout << "\n\tTotal combined expenses: " << combinedExpenses << DOLLAR_SIGN;
		cout << "\n\tTotal sale: " << totalSales << DOLLAR_SIGN;
		cout << "\n\tTotal profit (net): " << totalProfit << DOLLAR_SIGN << endl;

		//Let some time to the user to read the data
		system("pause");
	}
	catch (...)
	{

	}
}

//Function that displays actual item data
void UiManager::DisplayItemData(vector<Item> itemList, int selectedItemIndex)
{
	try
	{
		//Print menu title
		cout << "\n      Actual Data of " << itemList[selectedItemIndex].Get_Name() << "!";
		cout << "\n-------------------------------------------\n";

		//Print data of selected item
		cout << "\n\tNumber of " << itemList[selectedItemIndex].Get_Name() << " sold: " 
			<< itemList[selectedItemIndex].Get_Amount_Sold();
		cout << "\n\tNumber of " << itemList[selectedItemIndex].Get_Name() << " bought: "
			<< itemList[selectedItemIndex].Get_Amount_Bought() << endl;

		//Let some time to the user to read the data
		system("pause");
	}
	catch (...)
	{

	}
}

//Function that asks user for which item to display the data
void UiManager::AskItemToDisplay(vector<Item> itemList)
{
	try
	{
		cout << "\nPlease select the item to display in the following list: \n";

		//Print every list of items in catalog
		for (int i = 0; i < itemList.size(); i++)
		{
			cout << "\n\t" << i + 1 << ". " << itemList[i].Get_Name();
		}

		cout << "\n\tSelection: ";
	}
	catch (...)
	{

	}
}

//Function that asks minutes passed
void UiManager::AskMinutesPassed()
{
	try 
	{
		cout << "\nPlease enter the amount of time that's going to be paid to employees:\n";
	}
	catch (...)
	{

	}
}

//Function that prints information for the last payment
void UiManager::PrintPaymentInfo(int minutesPassed, int payment, int totalPayment)
{
	try
	{
		cout << "\n\tThe payment for " << minutesPassed << " minutes amounts to " << payment << DOLLAR_SIGN << endl;
		cout << "\tThe total of all the payments amounts to " << totalPayment << DOLLAR_SIGN << endl;

		//Let some time to the user to read the data
		system("pause");
	}
	catch (...)
	{

	}
}