#include "Item.h"

//Declare definition of Getter-Setter
string Item::Get_Name()
{
	try
	{
		return name;
	}
	catch (...)
	{

	}
}
void Item::Set_Name(string name)
{
	try
	{
		this->name = name;
	}
	catch (...)
	{

	}
}

int Item::Get_Price()
{
	try
	{
		return price;
	}
	catch (...)
	{

	}
}
void Item::Set_Price(int price) 
{
	try
	{
		this->price = price;
	}
	catch (...)
	{

	}
}

int Item::Get_Cost()
{
	try
	{
		return cost;
	}
	catch (...)
	{

	}
}
void Item::Set_Cost(int cost)
{
	try
	{
		this->cost = cost;
	}
	catch (...)
	{

	}
}

int Item::Get_Amount_Bought()
{
	try
	{
		return totalAmountBought;
	}
	catch (...)
	{

	}
}
void Item::Set_Amount_Bought(int amountBought)
{
	try
	{
		int tempAmount = totalAmountBought + amountBought;

		this->totalAmountBought = tempAmount;
	}
	catch (...)
	{

	}
}

int Item::Get_Amount_Sold()
{
	try
	{
		return totalAmountSold;
	}
	catch (...)
	{

	}
}
void Item::Set_Amount_Sold(int amountSold)
{
	try
	{
		this->totalAmountSold += amountSold;
	}
	catch (...)
	{

	}
}
