#include "Item.h"

//Declare definition of Getter-Setter
string Item::Get_Name()
{
	return name;
}

void Item::Set_Name(string name)
{
	this->name = name;
}

int Item::Get_Cost()
{
	return cost;
}

void Item::Set_Cost(int cost)
{
	this->cost = cost;
}

int Item::Get_Amount_Bought()
{
	return totalAmountBought;
}

void Item::Set_Amount_Bought(int amountBought)
{
	int tempAmount = totalAmountBought + amountBought;

	this->totalAmountBought = tempAmount;
}

int Item::Get_Amount_Sold()
{
	return totalAmountSold;
}

void Item::Set_Amount_Sold(int amountSold)
{
	this->totalAmountSold += amountSold;
}
