#include "Warehouse.h"
#include "ErrorManager.h"
#include "UiManager.h"

int main()
{
    Warehouse myWarehouse;
  
	myWarehouse.Buy_Inventory();

    ErrorManager myErrorManager;
	UiManager myUiManager;

    // Hard coding 6 different catalog items and adding them to Warehouse
    Item CATALOG_ITEM_1("Apple", 12, 7);
    Item CATALOG_ITEM_2("Pineapple", 28, 15);
    Item CATALOG_ITEM_3("Watermelon", 34, 18);
    Item CATALOG_ITEM_4("Grape", 7, 2);
    Item CATALOG_ITEM_5("Strawberry", 5, 3);
    Item CATALOG_ITEM_6("Raspberry", 5, 4);

    vector<Item> itemCatalog{ CATALOG_ITEM_1, CATALOG_ITEM_2, CATALOG_ITEM_3, 
        CATALOG_ITEM_4, CATALOG_ITEM_5,CATALOG_ITEM_6 };

    myWarehouse.Add_Catalog(itemCatalog);
    //

	while (true) {
		try
		{
			int userEntryChoice = 0;
			myUiManager.PrintWarehouseTitle();


			//Program loop with menu
			do
			{
				myUiManager.PrintWarehouseMenu();

				//Read user entry
				userEntryChoice = myErrorManager.IntInputValidator(cin);


				//Switch that will call the right function depending of user entry
				switch (userEntryChoice)
				{
				case 1: //Sell inventory
				{
					myUiManager.PrintSellInventoryMenu(myWarehouse.itemInventory);
					myUiManager.AskSellerQuantity(myWarehouse.itemInventory, 1);
				}
				break;
				case 2: //Buy inventory
				{
					myUiManager.PrintCatalogList(itemCatalog);
					myUiManager.AskBuyerQuantity(itemCatalog, 2);
				}
				break;
				case 3: //Display data
				{

				}
				break;
				case 4: //Pay employees
				{
				}
				break;
				case 0:
				{
					//Print quit message
					cout << "\nYou are quitting the program!\n";
					system("pause");
				}
				break;
				default:
				{
					//Print invalid entry message
					cout << "\nError! Please select a valid option:\n";
				}
				break;
				}

			} while (userEntryChoice != '0');

			return 1;
		}
		catch (...)
		{
			cout << "Error!";
		}
	}

    system("pause");
}
