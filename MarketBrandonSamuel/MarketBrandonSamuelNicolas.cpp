#include "Warehouse.h"
#include "ErrorManager.h"
#include "UiManager.h"
#include "InformationDisplayManager.h"
#include "Payroll.h"

int main()
{
	Warehouse myWarehouse;
    ErrorManager myErrorManager;
	UiManager myUiManager;
	InformationDisplayManager myDisplayManager;
	Payroll myPayroll;

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
					myWarehouse.Sell_Inventory();

					cout << endl;
				}
				break;
				case 2: //Buy inventory
				{
					myWarehouse.Buy_Inventory();

					cout << endl;
				}
				break;
				case 3: //Display data
				{
					myDisplayManager.DisplayChoice();

					cout << endl;
				}
				break;
				case 4: //Pay employees
				{
					myPayroll.PaymentActivation();

					cout << endl;
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

			} while (userEntryChoice != 0);

			return 1;
		}
		catch (...)
		{
			cout << "Error!";
		}
	}

    system("pause");
}
