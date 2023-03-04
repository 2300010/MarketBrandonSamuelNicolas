#include <iostream>
#include "Warehouse.h"
#include "ErrorManager.h"
#include "OutputManager.h"

int main()
{
    Warehouse myWarehouse;
    ErrorManager myErrorManager;

    Item myItem("Banana", 30);

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
    
    system("pause");
}
