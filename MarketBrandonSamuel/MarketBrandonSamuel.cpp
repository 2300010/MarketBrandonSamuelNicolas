#include <iostream>
#include "Warehouse.h"

int main()
{
    Warehouse myWarehouse;

    Item myItem("Banana", 30);

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
