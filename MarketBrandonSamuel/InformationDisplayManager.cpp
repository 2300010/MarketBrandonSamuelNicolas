#include "InformationDisplayManager.h"

//Function that determines what to display for the user
void InformationDisplayManager::DisplayChoice()
{
	try
	{
		//Declare variable for the user's choice
		bool choiceIsValid = false;
		int userInput = 0;
		int itemSelected = 0;

		//Print display menu
		myErrorManager.GetUiManager().DisplayOptions();

		//Loop to prevent selection of an inexistant option
		while (!choiceIsValid)
		{
			//Receive user input
			userInput = myErrorManager.IntInputValidator(cin);

			if (userInput == 1 || userInput == 2)
			{
				choiceIsValid = true;
			}
			else
			{
				cout << "\nInvalid choice! Please select a valid choice in the list above:";
			}
		}

		//Reset choiceIsValid
		choiceIsValid = false;

		//Verify which option was chosen
		if (userInput == 1)
		{
			//Display general data
			myErrorManager.GetUiManager().DisplayGeneralData(myWarehouse.Get_Total_Items_Bought(),
				myWarehouse.Get_Total_Items_Sold(), myWarehouse.Get_Total_Cost_Paid(),
				myPayroll.GetTotalPayment(), myWarehouse.Get_Total_Sales());
		}
		else
		{
			//Ask user to select an item
			myErrorManager.GetUiManager().AskItemToDisplay(myCatalog.Get_Catalog_Items());

			//Loop to prevent selection of an inexistant option
			while (!choiceIsValid)
			{
				//Receive user input
				userInput = myErrorManager.IntInputValidator(cin);

				if (userInput < 0 || userInput > 6)
				{
					cout << "\nInvalid choice! Please select a valid choice in the list above:";
				}
				else
				{
					choiceIsValid = true;
				}
			}

			//Display item data
			myErrorManager.GetUiManager().DisplayItemData(myCatalog.Get_Catalog_Items(), userInput);
		}
	}
	catch (...)
	{

	}
}
