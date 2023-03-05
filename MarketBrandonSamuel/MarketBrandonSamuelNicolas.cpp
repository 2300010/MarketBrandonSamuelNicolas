#include <iostream>
#include "Warehouse.h"
#include "ErrorManager.h"
#include "OutputManager.h"

int main()
{
    Warehouse myWarehouse;
    ErrorManager myErrorManager;

    Item myItem("Banana", 30);


    // Hard coding 6 different catalog items and adding them to Warehouse
    Item CATALOG_ITEM_1("Apple", 7);
    Item CATALOG_ITEM_2("Pineapple", 15);
    Item CATALOG_ITEM_3("Watermelon", 18);
    Item CATALOG_ITEM_4("Grape", 2);
    Item CATALOG_ITEM_5("Strawberry", 3);
    Item CATALOG_ITEM_6("Raspberry", 4);
    
    vector<Item> itemCatalog{ CATALOG_ITEM_1, CATALOG_ITEM_2, CATALOG_ITEM_3, 
        CATALOG_ITEM_4, CATALOG_ITEM_5,CATALOG_ITEM_6 };

    myWarehouse.Add_Catalog(itemCatalog);
    //
    
	while (true) {
		try
		{
			int userEntryChoice;
			//Ask user to choose an option of the menu
			cout << "            Welcome to Warehouse !         " << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Please enter the number for the action desired : " << endl;
			cout << "                                                 " << endl;


			//Program loop with menu
			do
			{
				//Print menu
				cout << "1 - Sell Inventory " << endl;
				cout << "2 - Buy  Inventory" << endl;
				cout << "3 - Display Data" << endl;
				cout << "4 - Pay employees" << endl;
				cout << "To quit, enter 0 : ";

				//Read user entry
				// 
				// userEntryChoice = readInt();


				//Switch that will call the right function depending of user entry
				switch (userEntryChoice)
				{
				case 1:
				{
				}
				break;
				case 2:
				{
				}
				break;
				case 3:
				{
				}
				break;
				case 4:
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
    /*
    
    int nbrBananas = 0;

    cout << "Please select the number of bananas you want to buy: ";

    nbrBananas >> myErrorManager.IntInputValidator(cin);

    cout << "\nYou bought " << nbrBananas << " bananas.\n";

    system("Pause");

    for (int i = 0; i < 8; i++)
    {
        myWarehouse.Add_To_Inventory(myItem, 1);
        cout << myItem.Get_Amount_Bought();
        system("pause");
    }

    cout << "\tAn amount of " << myItem.Get_Amount_Bought() << " " << myItem.Get_Name() 
        << "s were bought at the costs of " << myItem.Get_Cost() << "$ each.\n";
    system("pause");

    cout << "\tSize of vector is: " << myWarehouse.itemInventory.size();

    system("pause");

    for (int i = 0; i < myWarehouse.itemInventory.size(); i++)
    {
        cout << "\t" << myWarehouse.itemInventory[i].Get_Name() << "\n";
    }
    */

    system("pause");
}
