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


void Warehouse::Set_Total_Cost_Paid(int costPaid) 
{
	this->totalCostPaid += costPaid;
}

int Warehouse::Get_Total_Cost_Paid()
{
	try
	{
		return totalCostPaid;
	}
	catch (...)
	{

	}
}

void Warehouse::Set_Total_Sales(int sales)
{
	this->totalSales += sales;
}

int Warehouse::Get_Total_Sales()
{
	try
	{
		return totalSales;
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
	//Print menu title
	cout << "\n       Sell Inventory Application!";
	cout << "\n-------------------------------------------";

	vector<vector<int>> sell_list;
	int idToSell = 0;
	int quantityToSell = 0;
	int itr = 0;
	int soldPrice = 0;
	vector<int> v1;
	do
	{

		if (!myErrorManager.GetUiManager().PrintSellInventoryMenu(itemInventory))
		{
			
			// Select id of wanted item
			idToSell = myErrorManager.IntInputValidator(cin);
			// verify it is not 0, quit if so
			if (idToSell == 0) {
				break;
			}
			//items are printed starting from 1 so we do -1 for the list position
			idToSell -= 1;
			

			myErrorManager.GetUiManager().AskSellerQuantity(itemInventory, idToSell);

			quantityToSell = myErrorManager.IntInputValidator(cin);
			cout << "Selected :" << quantityToSell << endl;
			
			if (quantityToSell > itemInventory.at(idToSell).Get_In_Inventory()) {
				cout << "Error !! Please Select a quantity that is lower or equal to the amount in inventory" << endl;
				continue;
			}
			if (idToSell > itemInventory.size()) {
				cout << "Error !! Please Select Valid Id" << endl;
				continue;
			}

			
		}
		else
		{
			return;
		}

		if (quantityToSell == 0) {
			continue;
		}
		v1.push_back(idToSell);
		v1.push_back(quantityToSell);
		sell_list.push_back(v1);

	} while (true);
	cout << "Enter how much all the items are sold for :";
	soldPrice = myErrorManager.IntInputValidator(cin);

	for (int i = 0; i < sell_list.size(); i++) {
		//update item amount in inventory
		itemInventory[sell_list[i].at(0)].Set_In_Inventory(itemInventory[sell_list[i].at(0)].Get_In_Inventory() - quantityToSell);
		//update item total amount sold
		itemInventory[sell_list[i].at(0)].Set_Amount_Sold(sell_list[i].at(1));
		//update warehouse total sold count
		soldCount += quantityToSell;
		//update business profit 
		businessProfit += soldPrice;
	};
	
	cout << endl << endl << endl;
}

//Function to buy inventory from catalog
void Warehouse::Buy_Inventory()
{
	myErrorManager.GetUiManager().PrintCatalogList(catalog.Get_Catalog_Items());

	int idToBuy = 0;
	int quantityToBuy = 0;

	do
	{
		// Select id of wanted item, items are printed starting from 1 so we do -1 for the list position
		idToBuy = myErrorManager.IntInputValidator(cin);
		if (idToBuy == 0) {
			return;
		}
		idToBuy = idToBuy-1;

		myErrorManager.GetUiManager().AskBuyerQuantity(catalog.Get_Catalog_Items(), idToBuy);

		quantityToBuy = myErrorManager.IntInputValidator(cin);
		cout << "Selected :" << quantityToBuy << endl;

		
		if (quantityToBuy == 0) {
			continue;
		}
		else {
			break;
		}

	} while (true);
	// Create temporary item copy of catalog item and set amount bought for warehouse inventory tracking
	Item boughtItem = catalog.Get_Catalog_Items()[idToBuy];
	boughtItem.Set_In_Inventory(quantityToBuy);

	//add to warehouse inventory and track total quantity of items
	Add_To_Inventory(boughtItem, quantityToBuy);
	Add_To_Business_Spending(catalog.Get_Cost(quantityToBuy, idToBuy));

	//update warehouse bought count
	buyCount += quantityToBuy;

	//print total cost and total spending
	Set_Total_Cost_Paid(catalog.Get_Cost(quantityToBuy, idToBuy));
	cout << "Total Cost : " << catalog.Get_Cost(quantityToBuy, idToBuy) << endl;
	cout << "Total Business Spending : " << Get_Business_Spending() << endl;
	cout << endl << endl;
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