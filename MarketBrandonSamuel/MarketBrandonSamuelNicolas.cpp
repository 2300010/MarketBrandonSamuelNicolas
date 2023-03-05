#include "Warehouse.h"
#include "ErrorManager.h"
#include "UiManager.h"

int main()
{
    Warehouse myWarehouse;
  
	myWarehouse.Buy_Inventory();

    ErrorManager myErrorManager;
	UiManager myUiManager;


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
