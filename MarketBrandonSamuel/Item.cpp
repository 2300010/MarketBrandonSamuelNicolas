#include "Item.h"

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
