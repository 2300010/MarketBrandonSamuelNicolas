#include "Catalog.h"





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