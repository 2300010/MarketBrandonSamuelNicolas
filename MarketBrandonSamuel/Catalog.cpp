#include "Catalog.h"


Catalog::Catalog() {
	Init();
}


int Catalog::Get_Cost(int purchaseQuantity, int selectedItemId)
{
	try
	{
		return purchaseQuantity * catalogItems.at(selectedItemId).Get_Cost();
	}
	catch (...)
	{

	}
}

vector<Item> Catalog::Get_Catalog_Items() {
	try
	{
		return catalogItems;
	}
	catch (...)
	{

	}
}

void Catalog::Init() {
	Item CATALOG_ITEM_1("Apple", 7);
	Item CATALOG_ITEM_2("Pineapple", 15);
	Item CATALOG_ITEM_3("Watermelon", 18);
	Item CATALOG_ITEM_4("Grape", 2);
	Item CATALOG_ITEM_5("Strawberry", 3);
	Item CATALOG_ITEM_6("Raspberry", 4);
	
	catalogItems.push_back(CATALOG_ITEM_1);
	catalogItems.push_back(CATALOG_ITEM_2);
	catalogItems.push_back(CATALOG_ITEM_3);
	catalogItems.push_back(CATALOG_ITEM_4);
	catalogItems.push_back(CATALOG_ITEM_5);
	catalogItems.push_back(CATALOG_ITEM_6);
}